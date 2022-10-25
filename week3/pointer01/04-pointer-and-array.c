#include<stdio.h>
int main(){
	int a[5] = {1,1,2,3,5}, *p;
	for(p=a;p<a+5;++p)
		printf("%d\n",*p);
}
