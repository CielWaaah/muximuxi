#include<stdio.h>
int main(){
	float price[] = {28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};
	int i,n;
	float cost = 0;
	for(i=0;i<10;i++){
	   scanf("%d",&n);
	   cost += price[i] * n;
	}
	printf("%.1f\n",cost);
}
