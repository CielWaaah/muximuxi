#include<stdio.h>
int main(){
	int a[10]={1,2,3,4,5,6,7,8,9,10}, *p=&a[5];
	printf("%d %d %d %d\n",a[3],p[-2],p[a[2]],a[0]+a[2]);
}
