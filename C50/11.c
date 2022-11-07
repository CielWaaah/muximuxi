#include <stdio.h>

void bubbleSort(int a[],int n)
{
		int i,j,t;
			for(i=0;i<n-1;i++)
					{
								for(j=0;j<n-i-1;j++)
											{
															if(a[j] < a[j+1])
																			{
																								t = a[j];
																												a[j] = a[j+1];
																																a[j+1] = t;
																																			}
																	}
									}
}
int main()
{
		int n,m,i;
			int a[100000];
				
				while(scanf("%d %d",&n,&m))
						{
									for(i=0;i<n;i++)
													scanf("%d",&a[i]);
											bubbleSort(a,n);
													for(i=0;i<m;i++)
																{
																				printf("%d%c",a[i],i==m-1 ? '\n':' ');
																						}
														}
}
