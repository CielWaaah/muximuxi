#include<stdio.h>
void func(int a){
	a = a + 1;
	printf("%d",a);
}
int main(){
	int a=3;
	func(a);
	func(a);
	printf("\n");
}
