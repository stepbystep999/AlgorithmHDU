#include<stdio.h>
int main()
{
	int n, i, sum = 0, num;
	while(scanf("%d", &n) != EOF && n != 0)
	{
		sum = 0;
		for(i = 0; i < n; i++)
		{
			scanf("%d", &num);
			sum += num;
		}
		printf("%d\n", sum);		
	}
	return 0;
} 
