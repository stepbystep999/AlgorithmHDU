#include<stdio.h>
int main()
{
	int m, n, i, sumpart, sum, numm; 
	while(scanf("%d%d", &n, &m) != EOF)
	{
		numm = n / m;
		for(i = 1; i < numm; i++)
			printf("%d ", (2 * i - 1) * m + 1);
			
		if(n % m == 0)
			printf("%d\n", (2 * i - 1) * m + 1);
		else
		{
			printf("%d ", (2 * i - 1) * m + 1);
			printf("%d\n", numm * 2 * m + n % m + 1);
		}		
	}
	return 0;
}
