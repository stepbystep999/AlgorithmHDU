#include<stdio.h>
int main()
{
	int r, i, len, flag;
	long int n, bit, divide;
	char a[35], num[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	while(scanf("%d%d", &n, &r) != EOF)
	{
		flag = 0;
		if(n < 0)
		{
			flag = 1;
			n = -n;
		}	
		i = 0;
		while(n >= r)
		{
			bit = n % r;
			a[i++] = num[bit];
			n /= r;
		}
		a[i] = num[n];
		len = i + 1;
		if(flag == 1)
			printf("-");
		for(i = len - 1; i >=0; i--)
			printf("%c", a[i]);
		printf("\n");	
	}
	return 0;
}
