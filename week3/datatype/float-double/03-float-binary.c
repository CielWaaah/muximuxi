#include<stdio.h>
int main(){
	float a=0.75;
	printf("%f\n",a);
	printf("%x\n",*(int *)(&a));

	return 0;
}
