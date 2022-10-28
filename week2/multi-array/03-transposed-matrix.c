#include<stdio.h>
int main(){
	int n,m,i,j,t;
	int a[100][100],b[100][100]={0};
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			b[j][i] = a[i][j];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d",b[i][j]);
			j < n-1 ? putchar(' ') : putchar('\n');
		}
	}
	return 0;
}
