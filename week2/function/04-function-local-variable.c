#include<stdio.h>
int main(){
	int a=666;
	{
	int a=777;
	a++;
	}
	printf("%d\n",a);
}
