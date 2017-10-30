#include<stdio.h>
#include<string.h>
int main()
{
	int n, i, len, j, sum;
	char a[10005];
	while(scanf("%d", &n) != EOF)
	{
		getchar();
		for(i = 0; i < n; i++)
		{
			gets(a);
			len = strlen(a);
			sum = 1;
			for(j = 0; j < len; j++)
			{	
				if(a[j] == a[j + 1])
					sum++;
				else
				{
					if(sum > 1)
						printf("%d", sum);
					printf("%c", a[j]);
					sum = 1;
				}
			}
			printf("\n");
		}		
	}
	return 0;
}
