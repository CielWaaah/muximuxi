#include<stdio.h>
#include<string.h>
int main()
{
	    char A[100],B[100];
	        int DA,DB,i,a=0,b=0;
		    scanf("%s %d %s %d",A,&DA,B,&DB);
		        for(i=0;i<strlen(A);i++)
				        if(A[i]-'0'==DA)
						            a = a*10 + DA;
			    for(i=0;i<strlen(B);i++)
				            if(B[i]-'0'==DB)
						                b = b*10 + DB;
			        printf("%d",a+b);
}
