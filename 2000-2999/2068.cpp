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
	int n, m, temp, i;
	__int64 a[13], sum;
	a[0] = 1;
	a[1] = 0;
	a[2] = 1;
	for(i = 3; i <= 12; i++)
		a[i] = (i - 1) * (a[i - 1] + a[i - 2]);	
	while(scanf("%d", &n) != EOF && n != 0)
	{
		sum = 0;
		for(i = 0; i <= n / 2; i++)
			sum += a[i] * c(n, i);
		printf("%I64d\n", sum);		
	}
	return 0;
}
