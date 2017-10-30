#include<stdio.h>
int main()
{
	int n, i, num[101], min, min_index, temp;
	while(scanf("%d", &n) != EOF && n != 0)
	{
		scanf("%d", &num[0]);
		min_index = 0;
		min = num[0];
		for(i = 1; i < n; i++)
		{
			scanf("%d", &num[i]);
			if(num[i] < min)
			{
				min_index = i;
				min = num[i];
			}
				
		}
		temp = num[min_index];
		num[min_index] = num[0];
		num[0] = temp;
		for(i = 0; i < n - 1; i++)
			printf("%d ", num[i]);
		printf("%d\n", num[i]);		
	}
	return 0;
}
