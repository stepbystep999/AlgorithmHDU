#include<stdio.h>
#include<math.h>
int main()
{
	int num, i;
	__int64 n, m, x, tmp;
	while(scanf("%d", &num) != EOF)
	{
		for(i = 0; i < num; i++)
		{
			scanf("%I64d", &n);
			m = (__int64)(sqrt((double)(2 * n)));
			while((1 + m) * m / 2 <= n)
				m++;
			m--;
			tmp = (1 + m) * m / 2;
			if(tmp == n)
				x = m;
			else
				x = n - tmp;
			tmp = x % 9;
			if(tmp == 0)
				tmp = 9;
			printf("%I64d\n", tmp);
		}	
	}
	return 0;
}
