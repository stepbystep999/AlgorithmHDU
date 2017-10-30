#include<stdio.h> 
int main()
{
	int n, i;
	double a, b, c;
	while(scanf("%d", &n) != EOF)
	{
		for(i = 0; i < n; i++)
		{
			scanf("%lf%lf%lf", &a, &b, &c);
			if(a + b <= c || a + c <= b || b + c <= a)
				printf("NO\n");	
			else
				printf("YES\n");
		}	
	}
	return 0;
}
