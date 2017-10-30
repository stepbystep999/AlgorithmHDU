#include<stdio.h>
#include<math.h>
int main()
{
	int m, n, i, row, col;
	long int num, max_num;
	while(scanf("%d%d", &m, &n) != EOF)
	{
		scanf("%d", &num);
		max_num = num;
		row = 1;
		col = 1;
		for(i = 2; i <= m * n; i++)
		{
			scanf("%ld", &num);
			if(abs(num) > abs(max_num))
			{
				max_num = num;
				if(i % n == 0)
				{
					row = i / n;
					col = n;
				}
				else
				{
					row = i / n + 1;
					col = i % n;
				}		
			}	
		}
		printf("%d %d %ld\n", row, col, max_num);	
	}
	return 0;
}
