#include<stdio.h>
int main()
{
	    int N,i,j,s=0;
	        int a[10];
		    scanf("%d",&N);
		        for(i=0;i<N;i++)
				        scanf("%d",&a[i]);
			    for(i=0;i<N;i++)
				        {
						        for(j=0;j<N;j++)
								        {
										            s += a[i]*10 + a[j];
											            }
							        s = s - (a[i]*10+a[i]);
								    }
			        printf("%d",s);
}
