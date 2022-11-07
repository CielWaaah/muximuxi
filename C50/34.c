#include<stdio.h>
int main()
{
	    int N,a1,a2,b1,b2,cnt1=0,cnt2=0;
	        scanf("%d",&N);
		    while(N--)
			        {
					        scanf("%d %d %d %d",&a1,&a2,&b1,&b2);
						        if(a1+b1 == a2)
								            cnt2++;
							        if(a1+b1 == b2)
									            cnt1++;
								        if(a1+b1==a2 && a1+b1==b2)
										        {
												        	cnt1--;
														        	cnt2--;
																		}
									    }
		        printf("%d %d",cnt1,cnt2);
}
