#include<stdio.h>
int main()
{
	int n, i, a[12];
	while(scanf("%d", &n) != EOF)
	{
		i = 0;
		while(n >= 2)
		{
			a[i++] = n % 2;
			n /= 2;
		}
		a[i] = n;
		while(i >= 0)
			printf("%d", a[i--]);
		printf("\n");
	}
	return 0;
}
