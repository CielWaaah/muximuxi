#include<stdio.h>
int getmax(int a,int b,int c);
int main(){
	int a=1,b=3,c=2;
	printf("%d\n",getmax(a,b,c));
}
int getmax(int a,int b,int c){
	int max;
	max = a> b ? a : b;
	if(c>max)
		max = c;
	return max;
}
