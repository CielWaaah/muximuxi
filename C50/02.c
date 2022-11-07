#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	if(a<0 || a>100 || b<0 || b>100)
		printf("it is error.\n");
	else{
		switch(a/10){
			case 10:
			case 9:
			case 8:
			case 7:
			case 6:
			switch(b/10){
				case 10:
				case 9:
				case 8:
				case 7:
				case 6:
					printf("it is pass.\n"); break;
				default:
					printf("it is not pass\n"); break;
			} break;
			default:
				printf("it is not pass.\n"); break;

				
	   }
	}
}
