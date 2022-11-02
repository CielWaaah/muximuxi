#include<stdio.h>
int main(){
	short a=0x7fff;
	short b=0x8000;
	short c=0x8001;
	short d=0xffff;
	printf("%d %d %d %d\n",a,b,c,d);

	unsigned short ua=0x7fff;
	unsigned short ub=0x8000;
	unsigned short uc=0x8001;
	unsigned short ud=0xffff;
	printf("%u %u %u %u\n",ua,ub,uc,ud);
}
