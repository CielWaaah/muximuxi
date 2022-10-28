#include<stdio.h>
int main(){
	int a[5][5],i,j,m,n,t;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	scanf("%d %d",&m,&n);
	for(j=0;j<5;j++){
	   t = a[m-1][j];
	   a[m-1][j] = a[n-1][j];
	   a[n-1][j] = t;
	}
	for(i=0;i<5;i++){
	   for(j=0;j<5;j++){
	      printf("%d%c",a[i][j],j<4?' ':'\n');
	   }
	}
	return 0;
}
