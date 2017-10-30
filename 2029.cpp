#include<stdio.h>
#include<string.h>
int main()
{
	int n, i, j, k, len;
	char a[2005];
	while(scanf("%d", &n) != EOF)
	{
		getchar();
		for(k = 0; k < n; k++)
		{
			gets(a);
			len = strlen(a);
			for(i = 0, j = len - 1; i <= j; i++, j--)
			{
				if(a[i] == a[j])
					continue;
				else
				{
					printf("no\n");
					break;
				}	
			}
			if(i >= j + 1)
				printf("yes\n");
		}	
	}
	return 0;
}
