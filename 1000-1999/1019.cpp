#include<stdio.h>
int divide(int a, int b)
{
	if(a % b == 0)
		return b;
	else
		divide(b, a % b);
}
int main()
{
	int n, m, i, j;
	long int num0, num, multiple;
	while(scanf("%d", &n) != EOF)
	{
		for(i = 0; i < n; i++)
		{
			scanf("%d", &m);
			scanf("%ld", &num0);
			multiple = num0;
			for(j = 1; j < m; j++)
			{
				scanf("%ld", &num);
				num0 = divide(num0, num);
				multiple = multiple / num0 * num;
				num0 = multiple;
			}
			printf("%ld\n", multiple);
		}
	}
	return 0;
}
