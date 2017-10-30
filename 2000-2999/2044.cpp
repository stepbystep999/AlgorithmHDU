#include<stdio.h>
int main()
{
	int n, m1, m2, i;
	__int64 num[51];
	num[1] = 1;
	num[2] = 1;
	for(i = 3; i <= 50; i++)
		num[i] = num[i - 1] + num[i - 2];
	while(scanf("%d", &n) != EOF)
	{
		for(i = 0; i < n; i++)
		{
			scanf("%d%d", &m1, &m2);
			printf("%I64d\n", num[m2 - m1 + 1]);
		}
	}
	return 0;
}
