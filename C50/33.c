#include <stdio.h>
int main()
{
	    int N,i,j;
	        char C;
		    scanf("%d %c",&N,&C);
		        float r = N/2.0;
			    int row = r + 0.5;
			        for(i=0;i<row;i++)
					    {
						            for(j=0;j<N;j++)
								            {
										                if(i==0 || i==row-1 || j==0 || j==N-1)
													                printf("%c",C);
												            else
														                    printf(" ");
													            }
							            printf("\n");
								        }
}

