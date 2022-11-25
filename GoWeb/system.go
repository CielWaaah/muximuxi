package main

import (
	"fmt"
	"math/rand"
	"net/http"
	"strconv"
	"time"
)

// 总用户信息库
var UserStore = make(map[string]*User)

// 个人用户信息
type User struct {
	Name   string
	ID     string
	Pwd    string
	cookie http.Cookie
}

var user User

// 注册
func Register(w http.ResponseWriter, r *http.Request) {

	Name := r.FormValue("name")
	ID := r.FormValue("id")
	Pwd := r.FormValue("pwd")

	if ID != "" && Pwd != "" && Name != "" {
		user.Name = Name
		user.ID = ID
		user.Pwd = Pwd

		//把这个新用户放到用户库里去
		UserStore[user.ID] = &user

		w.Write([]byte("注册成功！"))
	} else {
		w.Write([]byte("注册失败！"))
	}
}

// 登录
func Login(w http.ResponseWriter, r *http.Request) {
	ID := r.FormValue("id")
	Pwd := r.FormValue("pwd")

	//检查用户是否存在
	_, ok := UserStore[ID]
	if ok {
		if Pwd == user.Pwd {
			//生成cookie
			value := strconv.Itoa(rand.Int())
			expires := time.Now().Add(time.Hour)
			cookie := http.Cookie{
				Name:     ID,
				Value:    value,
				Expires:  expires,
				HttpOnly: true,
			}
			http.SetCookie(w, &cookie)
			user.cookie = cookie

			w.Write([]byte("登陆成功！"))
		} else {
			w.Write([]byte("密码错误！"))
		}
	} else {
		w.Write([]byte("该用户不存在！"))
	}
}

// 获取信息
func Get(w http.ResponseWriter, r *http.Request) {
	//判断有无cookie存在
	cookies := r.Header["Cookie"]
	//有-->直接查看信息
	//无-->重新登陆
	if cookies != nil {
		fmt.Fprintf(w, "ID:%s\n", user.ID)
		fmt.Fprintf(w, "Name:%s", user.Name)
	} else {
		w.Write([]byte("请重新登录！"))
	}
}

// 修改信息
func Change(w http.ResponseWriter, r *http.Request) {
	//判断有无cookie存在
	cookies := r.Header["Cookie"]
	//有-->直接修改信息
	//无-->重新登陆
	if cookies != nil {
		newName := r.FormValue("name")
		newPwd := r.FormValue("pwd")
		if newName != "" && newPwd != "" {
			user.Name = newName
			user.Pwd = newPwd

			w.Write([]byte("修改成功！"))
		}
	} else {
		w.Write([]byte("请重新登录！"))
	}
}

func main() {

	mux := http.NewServeMux()

	//创建服务器
	server := http.Server{
		Addr:    "127.0.0.1:8080",
		Handler: mux,
	}

	//处理
	mux.HandleFunc("/register", Register)
	mux.HandleFunc("/login", Login)
	mux.HandleFunc("/get", Get)
	mux.HandleFunc("/change", Change)

	server.ListenAndServe()
}
