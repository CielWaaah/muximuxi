#include <stdio.h>
int main()
{
		int n,cnt=0;
			scanf("%d",&n);
				while(n!=1)
						{
									if(n%2==0)
												{
																n = n/2;
																			cnt++;
																					}
											else
														{
																		n = (3*n+1)/2;
																					cnt++;
																							}
												}
					printf("%d\n",cnt);
}
