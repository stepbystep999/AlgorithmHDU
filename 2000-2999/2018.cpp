#include<stdio.h>
int main()
{
	int n, i;
	__int64 a[55] = {0, 1, 2, 3};
	for(i = 4; i <= 54; i++)
		a[i] = a[i - 1] + a[i - 3];
	while(scanf("%d", &n) != EOF && n != 0)
		printf("%I64d\n", a[n]);
	return 0;
}
