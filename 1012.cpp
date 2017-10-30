#include<stdio.h>
int main()
{
	int n, i, f;
	double m, sum;
	printf("n e\n");
	printf("- -----------\n");
	printf("0 1\n");
	printf("1 2\n");
	printf("2 2.5\n");
	f = 2;
	sum = 2.5;
	for(i = 3; i < 10; i++)
	{
		f *= i;
		m = (double)1/ f;
		sum += m;
		printf("%d %.9lf\n", i, sum);		
	}	
	return 0;
} 
