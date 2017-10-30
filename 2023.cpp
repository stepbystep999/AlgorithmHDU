#include<stdio.h>
int main()
{
	int n, m, i, j, high, flag;
	double stu_av, stu_sum, cla_av, cla_sum, cla_avs[5];
	int score[50][5];
	while(scanf("%d%d", &n, &m) != EOF)
	{
		for(i = 0; i < n; i++)
		{
			stu_sum = 0;
			for(j = 0; j < m; j++)
			{
				scanf("%d", &score[i][j]);
				stu_sum += score[i][j];		
			}
			stu_av = stu_sum / m;
			if(i < n - 1)
				printf("%.2lf ", stu_av);
		}
		printf("%.2lf\n", stu_av);
		
		for(i = 0; i < m; i++)
		{
			cla_sum = 0;
			for(j = 0; j < n; j++)
			{
				cla_sum += score[j][i];
			}
			cla_av = cla_sum / n;
			cla_avs[i] = cla_av;
			if(i < m - 1)
				printf("%.2lf ", cla_av);
		}
		printf("%.2lf\n", cla_av);
		
		high = 0;	
		for(i = 0; i < n; i++)
		{
			flag = 0;
			for(j = 0; j < m; j++)
			{
				if(score[i][j] >= cla_avs[j])
					continue;
				else
				{
					flag = 1;
					break;
				}	
			}
			if(flag == 0)
				high++;
		}
		printf("%d\n\n", high);
	}	
	return 0;
}
