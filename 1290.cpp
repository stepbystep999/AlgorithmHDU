#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d", &n) != EOF)
		printf("%d\n", (n * n * n + 5 * n) / 6 + 1);
	return 0;
}
