#include<stdio.h>
int main()
{
	int n, m, i, num;
	while(scanf("%d%d", &n, &m) != EOF && (n != 0 || m != 0))
	{
		n %= 1000;
		num = 1;
		for(i = 0; i < m; i++)
			num = (num * n) % 1000;
		printf("%d\n", num);	
	}
	return 0;
}
