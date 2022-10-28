#include<stdio.h>
int main(){
	int a[5][5],i,j,k,flag=0;
	for(i=0;i<5;i++){
	   for(j=0;j<5;j++){
	      scanf("%d",&a[i][j]);
	   }
	}
	for(i=0;i<5;i++){
	   k=0;
	   for(j=1;j<5;j++){
	      if(a[i][j]>a[i][k])
		      k=j;
	   }
	   flag = 1;
	   for(j=0;j<5;j++){
	      if(a[j][k]<a[i][k]){
	         flag = 0;
		 break;
	      }
	   }
	   if(flag == 1){
	      printf("%d %d %d\n",i+1,k+1,a[i][k]);
	      break;
	   }
	   if(flag == 0)
		   printf("not found");
	   return 0;
	}

}
