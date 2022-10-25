#include<stdio.h>
void swap1(int a,int b){
	int t;
	t=a;
	a=b;
	b=t;
}
void swap2(int *p,int *q){
	int t;
	t=*p;
	*p=*q;
	*q=t;
}
int main(){
	int a=3,b=4;
	swap1(a,b);
	printf("%d %d\n",a,b);
	swap2(&a,&b);
	printf("%d %d\n",a,b);
}
