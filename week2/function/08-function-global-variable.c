#include<stdio.h>
double pi = 3.141592654;
double area(double r){
	return pi*r*r;
}
double circumference(double r){
	return 2*pi*r;
}
int main(){
	printf("%lf\n",pi);
	printf("%.2f\n",area(1.0));
	printf("%.2f\n",circumference(1.0));
}
