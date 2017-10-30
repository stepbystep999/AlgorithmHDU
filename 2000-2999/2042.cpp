#include<stdio.h>
int main()
{
	int n, m, i, num[31];
	num[0] = 3;
	for(i = 1; i <= 30; i++)
		num[i] = (num[i - 1] - 1) * 2;
	while(scanf("%d", &n) != EOF)
	{
		for(i = 0; i < n; i++)
		{
			scanf("%d", &m);
			printf("%d\n", num[m]);
		}
	}
	return 0;
}
