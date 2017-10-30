#include<stdio.h>
int main()
{
	int n, m, i, num[41];
	num[1] = 1;
	num[2] = 1;
	for(i = 3; i <= 40; i++)
		num[i] = num[i - 1] + num[i - 2];
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
