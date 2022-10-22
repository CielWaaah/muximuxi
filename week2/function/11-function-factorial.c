#include<stdio.h>
double factorial(int n);
int main(){
	int n;
	scanf("%d",&n);
	printf("%.0f\n",factorial(n));
}
double factorial(int n){
	int i;
	double f=1;
	for(i=2;i<=n;i++){
	   f *= i;
	}
	return f;
}
