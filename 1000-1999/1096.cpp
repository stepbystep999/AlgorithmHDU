#include<stdio.h>
int main()
{
	int n, i, j, sum = 0, x, num;
	while(scanf("%d", &n) != EOF)
	{
		for(i = 0; i < n; i++)
		{
			sum = 0;
			scanf("%d", &x);
			for(j = 0; j < x; j++)
			{
				scanf("%d", &num);
				sum += num;
			}
			printf("%d\n", sum);
			if(i < n - 1)
				printf("\n");
		}
				
	}
	return 0;
} 
