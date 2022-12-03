package main

import (
	"fmt"
	"io/ioutil"
	"net/http"
	"strconv"
    "encoding/json"
    "os"
)

const cookie =  "ASP.NET_SessionId=5fd3z355dyppsk55xpcpx255; _d_id=4680c66eddf7760789856d50ec8548"

// 定义学生结构体
type Student struct {
	Id          string `json:"id"`
	Pid         string `json:"Pid"`
	Name        string `json:"name"`
	Label       string `json:"label"`
	SzLogonName string `json:"szLogonName"`
	SzHandPhone string `json:"szHandPhone"`
	SzTel       string `json:"szTel"`
	SzEmail     string `json:"szEmail"`
}


func login() {
    url := "http://kjyy.ccnu.edu.cn/clientweb/xcus/ic2/Default.aspx"
    method := "POST"

    client := &http.Client { }
    req, err := http.NewRequest(method, url, nil)

    if err != nil {
        fmt.Println(err)
        return
    }
    req.Header.Add("Cookie", cookie)
    req.Header.Add("Accept", "*/*")
    req.Header.Add("Host", "kjyy.ccnu.edu.cn")
    req.Header.Add("Connection", "keep-alive")

    res, err := client.Do(req)
    if err != nil {
        fmt.Println(err)
        return
    }
    defer res.Body.Close()

    body, err := ioutil.ReadAll(res.Body)
    if err != nil {
        fmt.Println(err)
        return
    }
    fmt.Println(string(body))
}

func getname() {
    
    url := "http://kjyy.ccnu.edu.cn/ClientWeb/pro/ajax/data/searchAccount.aspx?type=logonname&ReservaApply=ReservaApply&term="
    method := "GET"

    f, err := os.Create("name.txt")
    if err != nil {
        fmt.Println(err)
        return 
    }
    defer f.Close()  // remember to close the file

    for i := 2022214299; i <= 2022999999; i++ {
        client := &http.Client {}
        req, err := http.NewRequest(method, url+strconv.Itoa(i), nil)

        if err != nil {
            fmt.Println(err)
            return
        }
        req.Header.Add("Accept", "*/*")
        req.Header.Add("Host", "kjyy.ccnu.edu.cn")
        req.Header.Add("Connection", "keep-alive")
        req.Header.Add("Cookie", cookie)

        res, err := client.Do(req)
        if err != nil {
            fmt.Println(err)
            return
        }
        defer res.Body.Close()

        body, err := ioutil.ReadAll(res.Body)
        if err != nil {
            fmt.Println(err)
            return
        }
        fmt.Println(i,":",string(body))
        var students []Student
        json.Unmarshal(body, &students)
        if len(students) > 0 { // 有效JSON数据保存到文件，数据格式：ID  学号  姓名
            f.WriteString(students[0].Id + " " + strconv.Itoa(i) + " " + students[0].Name + "\n")
        }
    }
}

func main() {
    login()
    getname()
}
