#include<stdio.h>
int main()
{
	    int i,A,B,C,T;
	        while(scanf("%d",&T) != EOF)
			    {
				            for(i=1;i<=T;i++)
						            {
								                scanf("%d %d %d",&A,&B,&C);
										            if(A+B>C)
												                    printf("Case #%d: true\n",i);
											                else
														                printf("Case #%d: false\n",i);
													        }
					        }
}
