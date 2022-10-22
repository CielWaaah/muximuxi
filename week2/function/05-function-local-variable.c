#include<stdio.h>
void func(int a){
	a = a + 1;
}
int main(){
	int a=3;
	func(a);
	printf("%d\n",a);
}
