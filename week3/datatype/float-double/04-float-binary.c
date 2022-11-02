#include<stdio.h>
int main(){
	union{
	   char ch[4];
	   float a;
	}p;
	p.ch[0] = 0x01;
	p.ch[1] = 0x00;
	p.ch[2] = 0x80;
	p.ch[3] = 0x3f;

	printf("%.23f",p.a);
}
