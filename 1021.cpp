#include<stdio.h>
int main()
{
	int n, i, m, m1, m2;
	while(scanf("%d", &n) != EOF)
	{
		m2 = 7;
		m1 = 11;
		for(i = 2; i <= n; i++)
		{
			m = (m1 + m2) % 3;
			m2 = m1;
			m1 = m;	
		}
		if(m == 0)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
} 
