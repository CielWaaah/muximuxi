#include<stdio.h>
int main(){
	int num,r=0;
	scanf("%d",&num);
	while(num!=0){
		r = r*10 + num%10;
		num = num/10;
	}
	printf("%d\n",r);
}
