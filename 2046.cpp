#include<stdio.h>
int main()
{
	int n, i;
	__int64 a[51];
	a[1] = 1;
	a[2] = 2;
	for(i = 3; i <= 50; i++)
		a[i] = a[i - 1] + a[i - 2];
	while(scanf("%d", &n) != EOF)
		printf("%I64d\n", a[n]);
	return 0;
}
