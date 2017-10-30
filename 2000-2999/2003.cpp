#include<stdio.h>
#include<math.h>
int main()
{
	double a;
	while(scanf("%lf", &a) != EOF)
		printf("%.2lf\n", sqrt(a * a));	
	return 0;	
}

