#include <stdio.h>
int main()
{
		int n,i,num,s;
			while(scanf("%d",&n) != EOF)
					{
								s=1;
										for(i=1;i<=n;i++)
													{
																	scanf("%d",&num);
																				if(num%2==1)
																									s *= num;
																						}
												printf("%d\n",s);
													}
				
}
