#include<stdio.h>
int main(){
	int x=1,y=2;
	int *ip;
	ip = &x;
	y = *ip;
	*ip = 0;
	printf("%d %d %d\n",x,y,*ip);
}
