#include<stdio.h>
#include<math.h>
int main()
{
	int n, i, j, num[105][2], temp0, temp1;
	while(scanf("%d", &n) != EOF && n != 0)
	{
		for(i = 0; i < n; i++)
		{
			scanf("%d", &num[i][0]);
			num[i][1] = abs(num[i][0]);
		}
		for(i = 1; i < n; i++)
			for(j = 0; j < i; j++)
			{
				if(num[i][1] > num[j][1])
				{
					temp0 = num[j][0];
					temp1 = num[j][1];
					num[j][0] = num[i][0];
					num[j][1] = num[i][1];
					num[i][0] = temp0;
					num[i][1] = temp1;
				}
			}
		for(i = 0; i < n - 1; i++)
			printf("%d ", num[i][0]);
		printf("%d\n", num[i][0]); 	
	}	
	return 0; 
} 
