#include<stdio.h>
int main()
{
		int t,n,i;
			double max,a;
				scanf("%d",&t);
					while(t--)
							{
										max=0.0;
												scanf("%d",&n);
														for(i=1;i<=n;i++)
																	{
																					scanf("%lf",&a);
																								if(a>max)
																													max = a;
																										}
																printf("%.2f\n",max);
																	 } 
}
