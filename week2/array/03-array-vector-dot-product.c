#include<stdio.h>
#define N 1000
int main(){
	int a[N],b[N],n,i,v=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	   scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	   scanf("%d",&b[i]);
	for(i=0;i<n;i++)
	   v += a[i] * b[i];
	printf("%d\n",v);
}
