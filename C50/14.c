#include<stdio.h>
int main()
{
	    int a[100];
	        int n,i,t,min,s;
		    while(scanf("%d",&n) != 0)
			        {
					    	if(n==0)
							    		break;
						    	for(i=0;i<n;i++)
								    		scanf("%d",&a[i]);
							    	
									min=a[0];
											
											for(i=1;i<n;i++)
														{
																		if(a[i] < min)
																						{
																											min = a[i];
																															s = i;
																																		}
																				}
															
													if(min==a[0])
																		printf("%d",a[i]);
															else
																		{
																						t = a[s];
																									a[s] = a[0];
																												a[0] = t;
																														}
																	
																	for(i=0;i<n;i++)
																					printf("%d%c",a[i],i<n-1 ? ' ':'\n');
																		}
}
