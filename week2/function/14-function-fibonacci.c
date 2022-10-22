#include<stdio.h>

int fib(int n);
void PrintFN(int m,int n);

int main(){
	int m,n,t;

	scanf("%d %d %d",&m,&n,&t);
	printf("fib(%d) = %d\n",t,fib(t));
	PrintFN(m,n);

	return 0;
}
int fib(int n){
	int a=1,b=1,c,i;
	if(n==1 || n==2) return 1;
	for(i=3;i<=n;i++){
	   c = a + b;
	   a = b;
	   b = c;
	}
	return c;
}
void PrintFN(int m,int n){
	int i,f,flag=0;
	for(i=1;(f=fib(i))<=n;i++){
	   if(f>=m){
	      if(flag) putchar(' ');
	      printf("%d",f);
	      flag = 1;
	   }
	}
	if(flag) printf("\n");
	if(!flag) printf("No Fibonacci number\n");
}

