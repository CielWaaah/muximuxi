#include<stdio.h>
#include<stdlib.h>
void bubbleSort(int a[],int n)
{
		int i,j,t;
			for(i=0;i<n-1;i++)
					{
								for(j=0;j<n-1-i;j++)
											{
															if(abs(a[j]) < abs(a[j+1]))
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
		int a[100];
			int n,i;
				while(scanf("%d",&n) && n!=0)
						{
									for(i=0;i<n;i++)
													scanf("%d",a+i);
											bubbleSort(a,n);
													for(i=0;i<n;i++)
																	printf("%d%c",a[i],i<n-1 ? ' ':'\n');
														}
}
