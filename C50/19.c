#include<stdio.h>
#include<math.h>
int main()
{
	    int N,i;
	        double max;
		    double c[1000];
		        int a[1000],b[1000];
			    scanf("%d",&N);
			        for(i=1;i<=N;i++)
					    {
						            scanf("%d %d",&a[i],&b[i]);
							            c[i] = sqrt(a[i]*a[i] + b[i]*b[i]);
								        }
				    max = c[1];
				        for(i=2;i<=N;i++)
						        if(c[i] > max)
								            max = c[i];
					    printf("%.2f",max);
}
