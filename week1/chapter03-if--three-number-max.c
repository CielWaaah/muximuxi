#include<stdio.h>
int main(){
	int a,b,c,max;
	scanf("%d %d %d",&a,&b,&c);
	max = a > b ? a : b;
	if(c > max)
		max = c;
	printf("%d\n",max);
}
