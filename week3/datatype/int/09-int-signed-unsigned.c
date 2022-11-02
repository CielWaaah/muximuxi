#include<stdio.h>
int main(){
	int a = 0x7fffffff; 
	int b = 0x80000000; 
	int c = 0x80000001;
	int d = 0xffffffff; 
	printf("%d %d %d %d\n", a, b, c, d);

	unsigned int u = 0x80000000; 
	unsigned int v = 0xffffffff; 
	printf("%u %u\n", u, v);
}
