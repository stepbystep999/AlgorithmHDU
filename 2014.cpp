#include<stdio.h>
int main()
{
	int n, i, sum, num, max, min;
	while(scanf("%d", &n) != EOF)
	{
		scanf("%d", &num);
		sum = num;
		max = num;
		min = num;
		for(i = 0; i < n - 1; i++)
		{
			scanf("%d", &num);
			sum += num;
			if(num > max)
				max = num;
			if(num < min)
				min = num;
		}
		printf("%.2lf\n", (double)(sum - max -min) / (n - 2));	
	}
	return 0;
}
