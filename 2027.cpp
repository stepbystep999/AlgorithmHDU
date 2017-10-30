#include<stdio.h>
#include<string.h>
int main()
{
	int n, i, j, len, num[5];
	char a[102];
	while(scanf("%d", &n) != EOF)
	{
		getchar();
		for(i = 0; i < n; i++)
		{
			memset(num, 0, sizeof(num));
			gets(a);
			len = strlen(a);
			for(j = 0; j < len; j++)
			{		
				switch(a[j])
				{
					case 'a':
						num[0]++;
						break;
					case 'e':
						num[1]++;
						break;
					case 'i':
						num[2]++;
						break;
					case 'o':
						num[3]++;
						break;
					case 'u':
						num[4]++;
						break;
					default:
						continue;
				}
			}
			if(i < n - 1)
				printf("a:%d\n""e:%d\n""i:%d\n""o:%d\n""u:%d\n\n", num[0], num[1], num[2], num[3], num[4]);
			else
				printf("a:%d\n""e:%d\n""i:%d\n""o:%d\n""u:%d\n", num[0], num[1], num[2], num[3], num[4]);
		}		
	}
	return 0;
}
