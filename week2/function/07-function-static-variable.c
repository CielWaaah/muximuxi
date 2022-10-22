#include<stdio.h>
void func(){
	static int a = 3;
	a++;
	printf("%d",a);
}
int main(){
	func( );
	func( );
	printf("\n");
}

