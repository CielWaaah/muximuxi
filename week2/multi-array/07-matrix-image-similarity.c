#include<stdio.h>
int main(){
	int m,n,i,j,a[100][100],b[100][100],cnt=0;
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&b[i][j]);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++){
		   if(a[i][j] == b[i][j])
			   cnt++;
		}
	printf("%.2f\n",cnt*100.0/(m*n));
}
