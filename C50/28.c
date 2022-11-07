#include<stdio.h>
#include<string.h>
int main()
{
		int n,i;
			char str[1000];
				scanf("%d",&n);
					getchar();
						while(n--)
								{
											int cnt=0;
													gets(str);
															for(i=0;i<strlen(str);i++)
																			if(str[i]>='0' && str[i]<='9')
																								cnt++;
																	printf("%d\n",cnt);
																		}
}
