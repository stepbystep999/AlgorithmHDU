#include<stdio.h>
#include<string.h>
#include<math.h>
int prime(int n)
{
	int num, i;
	num = n * n + n + 41;
	for(i = 2; i <= (int)sqrt(num); i++)
	{
		if(num % i == 0)
			return 0;
	}
	return 1;			
}
int main()
{
	int isPrime[90], n, i, x, y;
	memset(isPrime, 0, sizeof(isPrime));
	for(i = -39; i <= 50; i++)
	{
		if(prime(i) == 1)
			isPrime[i + 39] = 1;
	}
	while(scanf("%d%d", &x, &y) != EOF && (x != 0 || y != 0))
	{
		for(i = x; i <= y; i++)
			if(isPrime[i + 39] == 0)
			{
				printf("Sorry\n");
				break;
			}
		if(i == y + 1)
			printf("OK\n");
	}
	return 0;
}
