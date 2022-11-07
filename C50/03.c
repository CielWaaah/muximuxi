#include <stdio.h>
int main()
{
		int n=5,i,j,b;
			for(i=0;i<n;i++)
					{
								if(i<=n/2) b=i;
										else b--; 
												
												for(j=1;j<=b;j++) printf(" ");
															
														for(j=1;j<=n-2*b;j++) printf("*");
																
																printf("\n");
																	}
				return 0;
}
