#include<stdio.h>
int main()
{
	int n, i;
	__int64 a[51] = {0, 3, 6, 6};
	for(i = 4; i <= 50; i++)
		a[i] = a[i - 1] + 2 * a[i - 2];
	while(scanf("%d", &n) != EOF)
		printf("%I64d\n", a[n]);
	return 0;
}
