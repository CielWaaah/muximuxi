#include<stdio.h>
int a[1000][1000];
int main(){
	int n,i,j;
	int li,lj;
	int ri,rj;
	int cnt=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	li=0,lj=0;
	while(a[li][lj] != 0){
	   if(li<n-1){
	      lj++;
	   }else{
	      li++;
	      lj=0;
	   }
	}
	ri=n-1;
	rj=n-1;
	while(a[ri][rj] != 0){
	   if(rj>0)
		   rj--;
	   else{
	      ri--;
	      rj = n-1;
	   }
	}
	for(i=li+1;i<ri;i++)
		for(j=lj+1;j<rj;j++)
			if(a[i][j] != 0)
				cnt++;
	printf("%d\n",cnt);
}
