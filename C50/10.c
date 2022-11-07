#include <stdio.h>
int main()
{
		int n,m,i,j,flag;
			int a[50][5];
				float sa[50]={0},ga[5]={0};
					int num=0;
						
						while(scanf("%d %d",&n,&m) != EOF) 
								{
											for(i=0;i<n;i++)
															for(j=0;j<m;j++)
																				scanf("%d",&a[i][j]);
													
													for(i=0;i<n;i++)
																{
																				for(j=0;j<m;j++)
																									sa[i] += a[i][j];
																							sa[i] = sa[i]/double(m);
																										printf("%.2f%c",sa[i],i==n-1 ? '\n':' ');
																												}
															
															for(j=0;j<m;j++)
																		{
																						for(i=0;i<n;i++)
																											ga[j] += a[i][j];
																									ga[j] = ga[j]/double(n);
																												printf("%.2f%c",ga[j],j==m-1 ? '\n':' ');
																														}
																	
																	for(i=0;i<n;i++)
																				{
																								flag=1;
																											for(j=0;j<m;j++)
																																if(a[i][j]<ga[j])
																																						flag=0;
																														if(flag!=0)
																																			num++;
																																}
																			printf("%d\n",num);
																				}
}
