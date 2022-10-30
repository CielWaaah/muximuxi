#include<stdio.h>
int main(){
	int a[100][100],col,row,i,j;
	scanf("%d %d",&row,&col);
	for(i=0;i<row;i++)
	   for(j=0;j<col;j++)
		   scanf("%d",&a[i][j]);
	for(j=0;j<col;j++){
	   for(i=0;i<=j && i<row;i++)
		   printf("%d\n",a[i][j-i]);
	}
	for(i=1;i<row;i++){
	   for(int k=i,j=col-1;k<row && j>=0;k++,j--)
		   printf("%d",a[k][j]);
	}
}
