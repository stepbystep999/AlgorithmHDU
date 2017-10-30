#include<stdio.h>
__int64 factorial(int n)
{
	int i;
	__int64 final = 1;
	for(i = 1; i <= n; i++)
		final *= i;
	return final;
}
int main()
{
	int num, n, i;
	__int64 a[21] = {1, 0, 1};
	for(i = 3; i <= 20; i++)
		a[i] = (i - 1) * (a[i - 1] + a[i - 2]);
	while(scanf("%d", &num) != EOF)
	{
		while(num--)
		{
			scanf("%d", &n);
			printf("%.2lf%%\n", (double)a[n] / (double)factorial(n) * 100);
		}
	}
	return 0;
}
