#include<stdio.h>
int main()
{
	int n, m, i, j, tmp1, tmp2, sum1, more;
	double sum0, num[1005][2];
	while(scanf("%d%d", &m, &n) != EOF && (m != -1 || m != -1))
	{
		for(i = 0; i < n; i++)
			scanf("%lf%lf", &num[i][0], &num[i][1]);
		for(i = 1; i < n; i++)
			for(j = 0; j < i; j++)
				if((num[i][0] / num[i][1]) > (num[j][0] / num[j][1]))
				{
					tmp1 = num[i][0];
					tmp2 = num[i][1];
					num[i][0] = num[j][0];
					num[i][1] = num[j][1];
					num[j][0] = tmp1;
					num[j][1] = tmp2;	
				}
		sum0 = 0;
		sum1 = 0;
		for(i = 0; i < n; i++)
		{
			sum1 += num[i][1];
			sum0 += num[i][0];
			if(sum1 > m)
			{
				more = sum1 - m;
				sum0 -= (num[i][0]/ num[i][1]) * more ;
				break;
			}
			else if(sum1 == m)
			{
				break;
			}
		}
		printf("%.3lf\n", sum0);
	}
	return 0;
}
