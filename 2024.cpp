#include<stdio.h>
#include<string.h>
int main()
{
	int n, len, i, j, num, flag;
	char a[52];
	while(scanf("%d", &n) != EOF) 
	{
		getchar();
		for(i = 0; i < n; i++)
		{
			gets(a);
			len = strlen(a);
			num = (int)a[0];
			if(num < 65 || (num > 90 && num < 97 && num != 95) || num > 122)
			{
				printf("no\n");
				continue;
			}
			else
			{
				flag = 0;
				for(j = 1; j < len; j++)
				{
					num = (int)a[j];
					if(num < 48 || (num > 57 && num < 65) || (num > 90 && num < 97 && num != 95) || num > 122)
					{
						flag = 1;
						printf("no\n");
						break;
						
					}
					else
						continue;			
				}
				if(flag == 0)
					printf("yes\n");
			}
		}
	}
	return 0;
}
