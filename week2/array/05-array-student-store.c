#include<stdio.h>
int main(){
	int a[10],i,cnt=0;
	for(i=0;i<10;i++)
		scanf("%d",a+i);

	double sum=0,ave;
	for(i=0;i<10;i++){
	   sum += a[i];
	   if(a[i] < 60)
		   cnt++;
	}
	ave = sum/10.0;
	printf("%.1f %d",ave,cnt);
}
