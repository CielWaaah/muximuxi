#include<stdio.h>
int getMax(int *a,int n){
	int i,max=a[0];
	for(i=1;i<n;i++)
		if(a[i]>max)
			max = a[i];
	return max;
}
int main(){
	int a[5]={1,7,2,3,5};
	printf("%d\n",getMax(a,5));
}
