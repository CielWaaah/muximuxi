#include<stdio.h>
void fun1(int a){
	a++;
}
void fun2(int *p){
	(*p)++;
}
int main(){
	int a=3;
	fun1(a);
	printf("%d\n",a);
	fun2(&a);
	printf("%d\n",a);
}
