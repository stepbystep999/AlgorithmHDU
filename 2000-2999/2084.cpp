#include<stdio.h>
int max(int a, int b)
{
	if(a > b)
		return a;
	else
		return b;
}
int main()
{
	int c, n, i, j, dp[101][101];
	while(scanf("%d", &c) != EOF)
	{
		while(c--)
		{
			scanf("%d", &n);
			for(i = 0; i < n; i++)
				for(j = 0; j <= i; j++)
					scanf("%d", &dp[i][j]);
			for(i = n - 2; i >= 0; i--)
				for(j = 0; j <= i; j++)
					dp[i][j] += max(dp[i + 1][j], dp[i + 1][j + 1]);
			printf("%d\n", dp[0][0]);
		}
	}
	return 0;
}
