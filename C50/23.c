#include<stdio.h>
int main()
{
		int N,b[10]={0},i;
			char a[1001];
				gets(a);
					char *p = a;
						while(*p)
								{
											switch(*p)
														{
																		case '0': b[0]++; break;
																			  			case '1': b[1]++; break;
																							  			case '2': b[2]++; break;
																											  			case '3': b[3]++; break;
																															  			case '4': b[4]++; break;
																																			  			case '5': b[5]++; break;
																																							  			case '6': b[6]++; break;
																																											  			case '7': b[7]++; break;
																																															  			case '8': b[8]++; break;
																																																			  			case '9': b[9]++; break;
																																																							  		}
													p++;
														}
							for(i=0;i<10;i++)
									{
												if(b[i]>0)
																printf("%d:%d\n",i,b[i]);
													}
							 } 

