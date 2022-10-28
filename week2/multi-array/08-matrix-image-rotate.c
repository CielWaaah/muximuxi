#include<stdio.h>
int main(){
	int m,n,a[100][100],r[100][100],i,j,k;
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0,k=m-1;i<m;i++,k--)
		for(j=0;j<n;j++){
		   r[j][k] = a[i][j];
		}
	for(i=0;i<n;i++){
	   for(j=0;j<m;j++)
		   printf("%d%c",r[i][j],j<m-1 ? ' ':'\n');
	}
}
