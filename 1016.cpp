#include<stdio.h>
int main()
{
	int n, i;
	int prime[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
	int num[20];
	while(scanf("%d", &n) != EOF)
	{
		for(i = 0; i < n; i++)
		{
			num[i] = i + 1;
			
			
			
			
			printf("%d ", num[i]);
		}		
	}
	return 0;
}
