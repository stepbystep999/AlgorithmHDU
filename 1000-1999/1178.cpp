#include<stdio.h>
#include<math.h>
int main()
{
	int len;
	double n, m, p;
	while(scanf("%lf", &n) != EOF && n != 0)
	{
		m = n * (n + 1) / 6 * (n + 2);
		len = log10(m);
		p = m / pow(10, len);
		printf("%.2lfE%d\n", p, len);
	}
	return 0;
}
