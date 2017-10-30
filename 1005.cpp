#include<stdio.h>
int main()
{
	int a, b, n, i, cn1, cn2, cn;
	while(scanf("%d%d%d", &a, &b, &n) != EOF && (a != 0 || b != 0 || n != 0))
	{
		cn2 = 1;
		cn1 = 1;
		for(i = 3; i <= n; i++)
		{
			cn = ((a * cn1) % 7 + (b * cn2) % 7) % 7;
			cn2 = cn1;
			cn1 = cn;
		}
		printf("%d\n", cn);	
	}
	return 0;
} 
