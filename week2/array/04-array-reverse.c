#include<stdio.h>
int main(){
	int a[100],n,i,j,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	for(i=0,j=n-1;i<j;i++,j--)
	{
	   t = a[i];
	   a[i] = a[j];
	   a[j] = t;
	}	
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
