#include<stdio.h>
#include<string.h> 
int main()
{
	int n, i, j, num[31][31];
	memset(num, 0, sizeof(num));
	for(i = 1; i <= 30; i++)
	{
		num[i][1] = 1;
		num[i][i] = 1;
	}
	for(i = 3; i <= 30; i++)
		for(j = 2; j < i; j++)
			num[i][j] = num [i - 1][j - 1] + num[i - 1][j];
	while(scanf("%d", &n) != EOF)
	{
		for(i = 1; i <= n; i++)
		{
			for(j = 1; j <= i; j++)
			{
				printf("%d", num[i][j]);
				if(j < i)
					printf(" ");
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
