#include<stdio.h>
int main()
{
		int m,i,j,n,flag=1;
			double sum=0;
				while(scanf("%d",&m) != EOF)
						{
									for(i=1;i<=m;i++)
												{
																scanf("%d",&n);
																			for(j=1;j<=n;j++)
																							{
																												sum += double(flag)/double(j);
																																flag = -flag;
																																			}
																						printf("%.2f\n",sum);
																								}
										}
}
