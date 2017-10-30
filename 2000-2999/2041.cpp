#include<stdio.h>
int opt(int num)
{
	if(num == 1)
		return 1;
	else if(num == 2)
		return 2;
	else
		return opt(num - 1) + opt(num - 2) ;
}
int main()
{
	int n, i, num;
	while(scanf("%d", &n) != EOF)
	{
		for(i = 0; i < n; i++)
		{
			scanf("%d", &num);
			printf("%d\n", opt(num - 1));
		}
	}
	return 0;
}
