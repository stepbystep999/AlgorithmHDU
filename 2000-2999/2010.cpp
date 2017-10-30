#include<stdio.h>
#include<string.h>
int main()
{
	int n, m, i, num3, num2, num1, ops, num[10], temp;
	while(scanf("%d%d", &m, &n) != EOF)
	{
		memset(num, 0, sizeof(num));
		if(m > n)
		{
			temp = n;
			n = m;
			m = temp;
		}
		ops = 0;
		for(i = m; i <= n; i++)
		{
			num3 = i / 100;
			num2 = (i % 100) / 10;
			num1 = i % 10;
			if(i == num3 * num3 * num3 + num2 * num2 * num2 + num1 * num1 * num1)
				num[ops++] = i;			
		}
		if(num[0] == 0)
			printf("no\n");
		else
		{
			for(i = 0; i < ops - 1; i++)
				printf("%d ", num[i]);
			printf("%d\n", num[i]);
		}
	}
	return 0;
}
