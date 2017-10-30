#include<stdio.h>
int main()
{
	int n, m, i, j, final;
	while(scanf("%d", &n) != EOF)
	{
		for(i = 0; i < n; i++)
		{
			scanf("%d", &m);
			final = 1;
			for(j = 0; j < m; j++)
			{
				final = final * m % 10;
			}
			printf("%d\n", final);
		}	
	}
	return 0;
}
