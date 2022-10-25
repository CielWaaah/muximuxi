#include<stdio.h>
void output(int a[],int n){
	int i;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
int main(){
	int a[5]={1,1,2,3,5};
	output(a,5);
}
