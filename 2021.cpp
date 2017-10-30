#include<stdio.h>
int main()
{
	int n, i, j, num, sum;
	int a[6] = {100, 50, 10, 5, 2, 1};
	while(scanf("%d", &n) != EOF && n != 0)
	{
		sum = 0;
		for(i = 0; i < n; i++)
		{
			scanf("%d", &num);
			for(j = 0; j < 6; j++)
			{
				sum += num / a[j];
				num %= a[j];	
			}	
		}
		printf("%d\n", sum);		
	}
	return 0;
}
