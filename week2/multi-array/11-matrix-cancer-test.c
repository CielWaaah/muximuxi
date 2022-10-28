#include<stdio.h>
int main(){
	int n,i,j,ct[100][100];
	int area=0,len=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&ct[i][j]);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++){
		   if(ct[i][j]<=50){
		      area++;
		      if(i==0 || i==n-1 || j==0 || j==n-1)
			      len++;
		      else if(ct[i-1][j]>50 || ct[i+1][j]>50 || ct[i][j-1]>50 || ct[i][j+1]>50)
			      len++;
		   }
		}
	printf("%d %d",area,len);
}
