#include<stdio.h>
int main()
{
	int n, m, i, j, k, flag, nx[102], mx[102], final[102];
	while(scanf("%d%d", &n, &m) != EOF && (n != 0 || m != 0))
	{
		for(i = 0; i < n; i++)
			scanf("%d", &nx[i]);
		for(i = 0; i < m; i++)
			scanf("%d", &mx[i]);
		k = 0;
		for(i = 0; i < n; i++)
		{
			flag = 0;
			for(j = 0; j < m; j++)
			{
				if(nx[i] == mx[j])
				{
					flag = 1;
					break;
				}	
			}
			if(flag == 0)
				final[k++] = nx[i];	
		}
		if(k == 0)
			printf("NULL\n");
		else
		{
			for(i = 1; i < k; i++)
				for(j = 0; j < i; j++)
				{
					if(final[i] < final[j])
					{
						flag = final[i];
						final[i] = final[j];
						final[j] = flag;
					}
				}
			for(i = 0; i < k; i++)
				printf("%d ", final[i]); 
			printf("\n");
		}	
	}
	return 0;
}
