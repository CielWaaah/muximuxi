#include<stdio.h>
int main(){
	int m,n,a[100][100],i,j,s=0;
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++){
		   scanf("%d",&a[i][j]);
		   if(i==0 || j==0 || i==m-1 || j==n-1)
			   s+=a[i][j];
		}
	printf("%d\n",s);
}
