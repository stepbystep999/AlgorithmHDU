#include<stdio.h>
int main()
{
	int  m, n, i, odd, even, temp;
	while(scanf("%d%d", &m, &n) != EOF)
	{
		odd = 0;
		even = 0;
		if(m > n)
		{
			temp = n;
			n = m;
			m = temp;
		}
		for(i = m; i <= n; i++)
		{	
			if(i % 2 == 0)
				even += i * i;
			else
				odd += i * i * i;	
		}
		printf("%ld %ld\n", even, odd);
	}
	return 0;
}
