#include<stdio.h>
#include<math.h>
#define CLK_TCK 100.0
int main()
{
	    int C1,C2,t,h,m,s;
	        scanf("%d %d",&C1,&C2);
		    t = ceil( double(C2-C1)/CLK_TCK );
		        h = t/3600;
			    t = t%3600;
			        m = t/60;
				    t = t%60;
				        s = t;
					    printf("%d:%d:%d",h,m,s);
}
