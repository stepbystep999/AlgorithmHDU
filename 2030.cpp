#include<stdio.h>
#include<string.h>
int main()
{
	int n, i, j, len, sum;
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
				if((int)a[j] < 0)
					sum++;
			sum /= 2;
			printf("%d\n", sum);
		}	
	} 
	return 0;
}
