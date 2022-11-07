#include<stdio.h>
int isPrime(int n) // n是素数返回1，不是素数返回0
{
	    int i;
	        if (n == 2)
			        return 1;
		    if (n <= 1 || n%2 == 0)
			            return 0;
		        for (i = 3; i < n; i+=2)
				        if(n%i == 0)
						            return 0;
			    return 1;
}

int main()
{
	    int i, cnt = 0;
	        for (i = 1; i <= 100; i++) 
			    {
				            if (isPrime(i)) 
						            {
								                printf("%d ", i);
										            cnt++;
											                if (cnt%5==0) 
														                printf("\n");
													        }
					        }
}
