#include<stdio.h>
int gcd(int a, int b)
{
	int temp;
	if(a < b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	if(a % b == 0)
		return b;
	else
		gcd(b, a % b);
}
int main()
{
	int n, i, num, divisor;
	long multiple;  
	while(scanf("%d", &n) != EOF)
	{
		scanf("%d", &num);
		multiple = num;
		for(i = 1; i < n; i++)
		{
			scanf("%d", &num);
			divisor = gcd(multiple, num);
			multiple *= num / divisor;
		}
		printf("%ld\n", multiple);
	}
	return 0;
}
