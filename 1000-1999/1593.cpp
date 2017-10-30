#include<stdio.h>
# define PI 3.14159265358979323846
int main()
{
	double r, v1, v2;
	while(scanf("%lf%lf%lf", &r, &v1, &v2) != EOF)
	{
		if(v1 * PI > v2)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
} 
