#include<stdio.h>
int main(){
	int num,sum=0,cnt=0;
	do{
		scanf("%d",&num);
		if(num == 0)
			break;
		sum += num;
		cnt++;
	}while(1);
	printf("和为 %d, 平均值为 %.2f\n",sum,(double)sum/cnt);
	return 0;
}
