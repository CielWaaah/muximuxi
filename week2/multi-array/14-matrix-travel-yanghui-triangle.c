#include<stdio.h>
int main(){
	int n,i,j;
	int a[30][30];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		a[i][0] = a[i][i] = 1;
	for(i=2;i<n;i++)
		for(j=1;j<i;j++)
			a[i][j] = a[i-1][j] + a[i-1][j-1];
	for(i=0;i<n;i++)
		for(j=0;j<=i;j++)
			printf("%d%c",a[i][j],j!=i ? ' ':'\n');
}
