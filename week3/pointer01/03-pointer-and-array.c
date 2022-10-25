#include<stdio.h>
int main(){
	int a[5] = {1,1,2,3,5}, *p = a, i;
	for(i=0;i<5;i++)
		printf("%d%d%d%d\n",a[i],*(a+i),p[i],*(p+i));
}
