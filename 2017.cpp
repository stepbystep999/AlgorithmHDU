#include<stdio.h>
int main()
{
	int n, i, sum;
	char a;
	while(scanf("%d", &n) != EOF)
	{
		for(i = 0; i < n; i++)
		{
			getchar();
			sum = 0;
			while(scanf("%c", &a) != '\n')
			{
				if(a != '\n' && (int)a >= 48 && (int)a <= 57)
					sum++;
				else if(a == '\n') 
					break;
			}
			printf("%d\n", sum);
		}
	}
	return 0;
}
