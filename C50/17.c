#include<stdio.h>
int isPrime(int n)
{
	    int i;
	        if(n==2)
			        return 1;
		    if(n<=1 || n%2==0)
			            return 0;
		        for(i=3;i<n;i++)
				        if(n%i==0)
						            return 0;
			    return 1;
}
int main()
{
	    int M,N,i,j=1,cnt=0;
	        int a[10000];
		    scanf("%d %d",&M,&N);
		        for(i=1;i<=10000;i++)
				    {
					            if(isPrime(i))
							            {
									                a[j] = i;
											            j++;
												            }
						        }
			    for(j=M;j<=N;j++)
				        {
						        cnt++;
							        printf("%d%c",a[j],cnt%10==0 ? '\n':' ');
								    }
}
