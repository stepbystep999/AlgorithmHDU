#include<stdio.h>
int main()
{
	int n, i, m1, m2, sum;
	while(scanf("%d", &n) != EOF && n != 0)
	{
		scanf("%d", &m2);
		sum = m2 * 6 + 5;
		for(i = 1; i < n; i++)
		{
			scanf("%d", &m1);
			if(m1 - m2 > 0)
				sum += (m1 - m2) * 6 + 5; 
			else
				sum += (m2 - m1) * 4 + 5;
			m2 = m1;			
		}
		printf("%d\n", sum);
	}
	return 0;
}
