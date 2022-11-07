#include<stdio.h>
int a[1000][1000];
int main()
{
		int T,m,n,x,y,i,j,p,q,max=0;
			scanf("%d",&T);
				while(T--)
						{
									scanf("%d %d %d %d",&m,&n,&x,&y);		
											//输入矩阵 
											//		for(i=0;i<m;i++)
											//					for(j=0;j<n;j++)
											//									scanf("%d",&a[i][j]);		
											//											//框定一个x*y的子矩阵，然后顺着矩阵的方向移动，把所有情况都遍历到，并记录下子矩阵的元素和最大值		
											//													for(i=0;i<m-x+1;i++)
											//																for(j=0;j<n-y+1;j++)
											//																			{
											//																							int s=0;
											//																											for(p=i;p<x+i;p++)
											//																																for(q=j;q<y+j;q++)
											//																																						s += a[p][q];
											//																																										if(s > max)
											//																																															max = s;
											//																																																		}
											//																																																				//输出最大值 
											//																																																						printf("%d\n",max);			
											//																																																							}
											//																																																							 } 
