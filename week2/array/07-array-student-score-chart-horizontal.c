#include<stdio.h>
#define N 15
int main(){
	int i,a[N],c[11]={0},j;
	for(i=0;i<N;i++){
	   scanf("%d",&a[i]);
	   c[a[i]/10]++;
	}
	for(i=10;i>=0;i--){
	   switch(i){
	      case 10: printf("    100 : ");break;
	      case  9: printf("90 - 99 : ");break;
	      case  8: printf("80 - 89 : ");break;
	      case  7: printf("70 - 79 : ");break;
	      case  6: printf("60 - 69 : ");break;
              case  5: printf("50 - 59 : ");break;
	      case  4: printf("40 - 49 : ");break;
	      case  3: printf("30 - 39 : ");break;
	      case  2: printf("20 - 29 : ");break;
              case  1: printf("10 - 19 : ");break;
	      case  0: printf(" 0 -  9 : ");break;
	   }
	   for(j=1;j<=c[i];j++)
		   printf("*");
	   printf("\n");
	}
}
