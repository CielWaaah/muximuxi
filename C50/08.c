#include<stdio.h>
int main()
{
	    int n, i, max, min, score, sum;
	        while(scanf("%d", &n) != EOF)
			    {
				            scanf("%d", &score);
					            sum = max = min = score;
						            for (i = 2; i <= n; i++) {
								                scanf("%d", &score);
										            sum += score;
											                if (score > max) max = score;
													            if (score < min) min = score;
														            }
							            sum = sum - max - min;
								            printf("%.2f\n", (double) sum / (n-2));
									        }
}
