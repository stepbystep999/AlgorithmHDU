#include<stdio.h>
int main()
{
	int n, i, tmp;
	long int m;
	while(scanf("%d", &n) != EOF)
	{
		m = 1;
		tmp = 1;
		for(i = 1; i <= n; i++)
		{
			m = tmp * i;
			while(m % 10 == 0)
				m /= 10;
			tmp = m % 10000000;	
		}
		tmp %= 10;
		printf("%d\n\n", tmp);
	}
	return 0;
}
