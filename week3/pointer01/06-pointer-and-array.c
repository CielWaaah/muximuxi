#include<stdio.h>
int main(){
	int a[3] = {1,6,8}, *p=a;
	printf("%d\n",*p++);
	printf("%d\n",*p);
}
