#include<stdio.h>
__int64 c(int n, int m)
{
	int i;
	__int64 final = 1;
	if(m < (n - m))
		m = n - m;
	for(i = m + 1; i <= n; i++)
		final *= i;
	for(i = 1; i <= n - m; i++)
		final /= i;
	return final;
}
int main()
{
	int num, m, n, i;
	__int64 a[21] = {1, 0, 1};
	for(i = 3; i <= 20; i++)
		a[i] = (i - 1) * (a[i - 1] + a[i - 2]);
	while(scanf("%d", &num) != EOF)
	{
		while(num--)
		{
			scanf("%d%d", &n, &m);
			printf("%I64d\n", c(n, m) * a[m]);
		}
	}
	return 0;
}
