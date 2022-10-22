#include<stdio.h>

int prime(int p);
void Goldbach(int n);

int main(){
	int m,n,i,cnt;

	scanf("%d %d",&m,&n);
	if(prime(m) != 0) printf("%d is a prime number\n",m);
	if(m<6) m=6;
	if(m%2) m++;
	cnt = 0;
	for(i=m;i<=n;i+=2){
	   Goldbach(i);
	   cnt++;
	   if(cnt%5) printf(", ");
	   else printf("\n");
	}
	
	return 0;
} 
int prime(int p){
	int i;

	if(p<2) return 0;
	for(i=2;i<p;i++){
	   if(p%i==0)
		   return 0;
	}

	return 1;
}
void Goldbach(int n){
	int p,q;
	for(p=2;p<n;p++){
	   if(prime(p) && prime(n-p)){
	      printf("%d=%d+%d",n,p,q);
	      break;
	   }	
	}
}
