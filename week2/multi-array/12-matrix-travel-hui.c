#include<stdio.h>
int main(){
	int a[102][102],row,col,x,y,t;
	int cnt[102][102] = {0};
	int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0},k=0;
	scanf("%d %d",&row,&col);
	for(x=1;x<=row;x++)
		for(y=1;y<=col;y++)
			scanf("%d",&a[x][y]);
	for(x=0;x<=row+1;x++)
		for(y=0;y<=col+1;y++)
			if(x==0 || y==0 || x==row+1 || y==col+1)
				cnt[x][y] = -1;
	for(x=y=t=1;t<row*col;t++){
	   printf("%d\n",a[x][y]);
	   cnt[x][y] = -1;
	   if(cnt[x+dx[k]][y+dy[k]] != 0) k = (k+1)%4;
	   x += dx[k];
	   y += dy[k];
	}
}
