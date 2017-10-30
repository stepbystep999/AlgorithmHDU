#include<stdio.h> 
int main()
{
	int n, a, b, i;
	char ops;
	double re_dou;
	while(scanf("%d", &n) != EOF)
	{
		getchar();
		for(i = 0; i < n; i++)
		{
			scanf("%c%d%d", &ops, &a, &b);
			switch(ops)
			{
				case '+':
					printf("%d\n", a + b);
					break;
				case '-':
					printf("%d\n", a - b);
					break;
				case '*':
					printf("%d\n", a * b);
					break;
				case '/':
					if(a % b == 0)
					{
						printf("%d\n", a / b);
						break;
					}
					else
					{
						re_dou = (double)a / (double)b;
						printf("%.2lf\n", re_dou);
						break;
					}
			}
			if(i < n - 1)
				getchar();
		}
	}
	return 0;	
}

