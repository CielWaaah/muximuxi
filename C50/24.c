#include<stdio.h>
int main()
{
		char ch[1001];
		    gets(ch);
		        char *p = ch;   
			    int sum=0;
			        
			        while(*p)
					    {
						            sum += *p - '0';
							            p++;
								        }
				    
				    int i=0;
				        char *a[3];
					    
					    while(sum)
						        {
								    	switch(sum%10)
												{
														        case 0:a[i]="ling";break;
															       	        case 1:a[i]="yi";break;
																	       	        case 2:a[i]="er";break;
																			       	        case 3:a[i]="san";break;
																					       	        case 4:a[i]="si";break;
																							       	        case 5:a[i]="wu";break;
																									       	        case 6:a[i]="liu";break;
																											       	        case 7:a[i]="qi";break;
																													       	        case 8:a[i]="ba";break;
																															       	        case 9:a[i]="jiu";break;
																																	       	        default:break;
																																				    	}
									    	sum = sum/10;
										    	i++;
											    }
					        i--;
						    for( ;i>0;i--)
							        	printf("%s ",a[i]);
						        printf("%s\n",a[i]);
}
