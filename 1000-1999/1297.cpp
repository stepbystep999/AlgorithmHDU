#include<stdio.h>
#include<string.h>
int a[1005][1005];
int main()
{
	int n, i, j, temp;
	memset(a, 0, sizeof(a));
	a[1][0] = 1;
	a[2][0] = 2;
	a[3][0] = 4;
	a[4][0] = 7;
	for(i = 5; i <= 1000; i++)
	{
		temp = 0;
		for(j = 0; j <= 1000; j++)
		{
			temp += a[i - 1][j] + a[i - 2][j] + a[i - 4][j];
			a[i][j] = temp % 10;
			temp /= 10;		
		}
	}
	while(scanf("%d", &n) != EOF)
	{
		i = 1000;
		while(a[n][i] == 0)
			i--;
		while(i >= 0)
		{
			printf("%d", a[n][i]);
			i--;
		}
		printf("\n");
	}
	return 0;	
} 
