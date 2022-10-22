#include<stdio.h>
int sum(int n);
int main(){
	int n;
	scanf("%d",&n);
	printf("%d\n",sum(n));
}
int sum(int n){
	int i,s=0;
	for(i=1;i<=n;i++){
	   s += i;
	}
	return s;
}
