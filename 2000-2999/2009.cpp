#include<stdio.h>
#include<math.h>
int main()
{
	int n, m, i;
	double num, sum;
	while(scanf("%d%d", &n, &m) != EOF)
	{
		sum = n;
		num = n;
		for(i = 1; i < m; i++)
		{
			num = sqrt(num);
			sum += num;
		}
		printf("%.2lf\n", sum);
	}
	return 0;
}
