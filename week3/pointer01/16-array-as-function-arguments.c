#include<stdio.h>
void fun(int *a){
	*a = *(a-1) + *(a+1);
}
int main(){
	int i=0,s=0,arr[5]={1,3,5,7,9};
	fun(arr+2);
	for(;i<5;i++)
		s += arr[i];
	printf("%d\n",s);
}
