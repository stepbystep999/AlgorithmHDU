#include<stdio.h>
int main()
{
	int m;
	long int n;
	while(scanf("%d", &m) != EOF)
	{
		while(m--)
		{
			scanf("%ld", &n);
			printf("%ld\n", 2 * n * n - n + 1);	
		}
	}
	return 0;
} 
