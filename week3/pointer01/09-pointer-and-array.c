#include<stdio.h>
int main(){
	int a[9]={1,2,3,4,5,6,7,8};
	int *p=a,sum=0;
	for(;p<a+8;p++)
		if(*p%2==0)
			sum += *p;
	printf("%d\n",sum);
}
