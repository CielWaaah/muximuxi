#include<stdio.h>
#include<math.h>
int main()
{
	    double R1,P1,R2,P2,s1,s2;
	        scanf("%lf %lf %lf %lf",&R1,&P1,&R2,&P2);
		    s1 = R1*R2*cos(P1+P2);
		        s2 = R1*R2*sin(P1+P2);
			    if(s2>0)
				            printf("%.2f+%.2fi",s1,s2);
			        else
					        printf("%.2f%.2fi",s1,s2);
}
