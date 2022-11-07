#include <stdio.h>
int main()
{
		int year,month,day,sum,i;
			while(scanf("%d/%d/%d",&year,&month,&day) != EOF)
					{
								sum=day;
										if(month==1)
													{
																	printf("%d\n",sum);
																			}
												else
															{
																			for(i=1;i<month;i++)
																							{
																												switch(i)
																																	{
																																							case 1: case 3:case 5:case 7: case 8: case 10: case 12:
																																														sum += 31;break;
																																																			case 4:case 6:case 9:case 11:
																																																				sum += 30;break;
																																																									case 2:
																																																										sum += 28;break;
																																																														}
																															}
																						if(month>2)
																											if(year%400==0 || year%4==0 && year%100!=0)
																																	sum += 1;
																									printf("%d\n",sum);
																											}
													}
}
