#include<stdio.h>
int main(){
	int score;
	scanf("%d",&score);
	switch(score/10){
		case 10:
		case 9:printf("A\n");break;
		case 8 :
		case 7:printf("B\n");break;
		case 6:printf("C\n");break;
		default:printf("D\n");break;
	}
}
