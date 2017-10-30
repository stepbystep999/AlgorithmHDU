#include<stdio.h>
int main()
{
	int n, m, i, num;
	while(scanf("%d", &n) != EOF)
	{
		m = 1;
		for(i = 0; i < n; i++)
		{
			scanf("%d", &num);
			if(num % 2 == 1)
				m *= num;
		}
		printf("%d\n", m);	
	}
	return 0;
}
