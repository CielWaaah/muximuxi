#include<stdio.h>
int main(){
	int month;
	scanf("%d",&month);
	if(month<=3 && month<=5)
		printf("%d 月是春季.\n",month);
	else if(month>=6 && month<=8)
		printf("%d 月是夏季.\n",month);
	else if(month>=9 && month<=11)
		printf("%d 月是秋季.\n",month);
	else if(month==1 || month==2 || month==12)
		printf("%d 月是春季.\n",month);
	else
		printf("%d 月份不存在\n",month);
}
