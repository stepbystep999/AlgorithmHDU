#include<stdio.h>
int main()
{
	int N, n, m, i, j, num, a, b;
	while(scanf("%d", &N) != EOF)
	{
		for(i = 0; i < N; i++)
		{
			j = 0;
			getchar();
			while(scanf("%d%d", &n, &m) != EOF && (n != 0 || m != 0))
			{
				num = 0;
				for(b = 2; b < n; b++)
				{
					for(a = 1; a < b; a++)
					{
						if((a * a + b * b + m) % (a * b) == 0)
							num++; 
					}
				}
				printf("Case %d: %d\n", ++j, num); 
			}
			if(i < N - 1)
				printf("\n");
		}	
	}
	return 0;
}
