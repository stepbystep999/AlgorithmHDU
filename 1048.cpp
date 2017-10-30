#include<stdio.h>
#include<string.h>
int main()
{
	int len, i, n;
	char str[201];
	char num[26] = {'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y'};
	while(scanf("%s", str) != EOF && strcmp(str,"ENDOFINPUT") != 0)
	{
		getchar();
		gets(str);
		len = strlen(str);
		for(i = 0; i < len; i++)
		{
			n = (int)str[i];
			if(n > 64 && n < 91)
			{
				n -= 64;
				str[i] = num[(n + 21) % 26];	
			}
			printf("%c", str[i]);
		}
		printf("\n");
		gets(str);		
	}
	return 0;
}
