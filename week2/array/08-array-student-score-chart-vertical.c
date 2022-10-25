#include<stdio.h>
#define N 15

int main(){
	int i,a[N],c[11]={0},j,max=0;
	for(i=0;i<N;i++){
	   scanf("%d",a+i);
	   c[a[i]/10]++;
	   if(c[a[i]/10]>max)
		   max = c[a[i]/10];
	}
	for(i=0;i<max;i++){
	   for(j=0;j<11;j++)
		   if(c[j]>=max-i)
			   printf("  * ");
	   	   else 
			   printf("   ");
	   printf("\n");
	}
printf("------------------------------------\n");
for(i=0;i<=100;i+=10)
   printf(" %2d ",i);
printf("\n");
}
