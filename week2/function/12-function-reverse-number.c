#include<stdio.h>
int reverse(int number);
int main(){
	int n;
	scanf("%d",&n);
	printf("%d\n",reverse(n));
	return 0;
}
int reverse(int number){
	int r=0;
	while(number!=0){
	   r = r*10 + number%10;
	   number = number/10;
	}
	return r;
}
