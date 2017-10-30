#include<stdio.h>
int divide(int a, int b)
{
	if(a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if(a % b == 0)
		return b;
	else
		divide(b, a % b); 
}
int main()
{
	int m, n, f;
	while(scanf("%d%d", &m, &n) != EOF)
	{
		f = divide(m, n);
		f = m / f * n;
		printf("%d\n", f);
	}
	return 0;
} 
