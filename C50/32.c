#include<stdio.h>
int main()
{
	    int n,i,g,s,b;
	        scanf("%d",&n);
		    g = n%10;
		        s = n/10%10;
			    b = n/100%10;
			        for(i=1;i<=b;i++)
					        printf("B");
				    for(i=1;i<=s;i++)
					            printf("S");
				        for(i=1;i<=g;i++)
						        printf("%d",i);
}
