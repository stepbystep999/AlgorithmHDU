#include<stdio.h>
double sum(int n) 
{
	int i, flag = -1;
	double s = 0;
	for(i = 1; i <= n; i++)
	{
		flag *= (-1); 
		s += (double)flag / i;
	}
	return s;
}
int main()
{
	int m, n, i;
	while(scanf("%d", &m) != EOF)
	{
		for(i = 0; i < m; i++)
		{
			scanf("%d", &n);
			printf("%.2lf\n", (double)sum(n));				
		}	
	}	
	return 0;
}
