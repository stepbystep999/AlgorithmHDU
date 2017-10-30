#include<stdio.h>
int divisor(int num)
{
	int i, sum = 0;
	for(i = 1; i <= num / 2; i++)
		if(num % i == 0)
			sum += i;
	return sum;
}
int main()
{
	int n, i, m1, m2;
	while(scanf("%d", &n) != EOF)
	{
		for(i = 0; i < n; i++)
		{
			scanf("%d%d", &m1, &m2);
			if(divisor(m1) == m2)
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
	return 0;
}
