#include<stdio.h>
#include<limits.h>

int main(){
	printf("char 的二进制位数 %d\n",CHAR_BIT);

	printf("signed char 最小值 = %d\n",SCHAR_MIN);
	printf("signed char 最大值 = %d\n",SCHAR_MAX);
	printf("unsigned char 最大值 = %u\n",UCHAR_MAX);

	printf("signed short 最小值 = %d\n",SHRT_MIN);
	printf("signed short 最大值 = %d\n",SHRT_MAX);
	printf("unsigned short 最大值 = %u\n",USHRT_MAX);

	printf("signed int 最小值 = %d\n",INT_MIN);
	printf("signed int 最大值 = %d\n",INT_MAX);
	printf("unsigned int 最大值 = %u\n",UINT_MAX);

	return 0;
}
