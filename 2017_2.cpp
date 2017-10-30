#include<stdio.h>
#include<string.h>
int main()
{
	int n, i, j, sum, len, num;
	char a[1005];
	while(scanf("%d", &n) != EOF)
	{
		getchar();
		for(i = 0; i < n; i++)
		{
			sum = 0;
			gets(a);
			len = strlen(a);
			for(j = 0; j < len; j++)
			{
				num = (int)a[j];
				if(num >= 48 && num <= 57)
					sum++;
			}
			printf("%d\n", sum);
		}	
	}
	return 0;
}
