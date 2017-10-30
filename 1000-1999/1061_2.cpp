#include<stdio.h>
int main()
{
	int n, i, flag;
	__int64 m;
	int num[10][4] = {{0},{1},{6,2,4,8},{1,3,9,7},{6,4},{5},{6},{1,7,9,3},{6,8,4,2},{1,9}};
	while(scanf("%d", &n) != EOF)
	{
		for(i = 0; i < n; i++)
		{
			scanf("%d", &m);
			flag = m % 10;
			if(flag == 0 || flag == 1 || flag == 5 || flag == 6)
				printf("%d\n", flag);
			else if(flag == 4 || flag == 9)
				printf("%d\n", num[flag][m%2]);
			else
				printf("%d\n", num[flag][m%4]); 	
		}	
	}
	return 0;
}
