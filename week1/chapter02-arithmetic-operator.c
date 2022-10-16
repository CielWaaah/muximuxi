#include<stdio.h>
int main(){
	int a;
	int b;
	double r;
	scanf("%d %d",&a,&b);
	printf("a + b = %d\n",a+b);
	printf("a - b = %d\n",a-b);
	printf("a * b = %d\n",a*b);
	printf("a / b = %d\n",a/b);
	printf("a %% b = %d\n",a%b);

	printf("(a+b)/2 = %d\n",(a+b)/2);
	printf("平均值 = %f\n\n",(double)(a+b)/2);

	scanf("%lf",&r);
	printf("半径为 %.3f 的圆的面积是 %.3f\n",r,3.14*r*r);
}
