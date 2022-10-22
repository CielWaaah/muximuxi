#include<stdio.h>
int max(int a,int b){
	if(a>b)
		return a;
	return b;
}
int main(){
	int c=max(3,2);
	printf("%d\n",c);
}
