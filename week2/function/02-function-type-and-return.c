#include<stdio.h>
int func2(){
	return 2;
}
int func3(){
	return 2.5;
}
int main(){
	int z;
	z = func2();
	printf("%d\n",z);
	printf("%d\n",func3());
}
