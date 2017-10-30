#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int len, i;
	char a[102];
	while(gets(a))
	{
		len = strlen(a);
		a[0] = toupper(a[0]);
		for(i = 1; i < len - 1; i++)
		{
			if(a[i] == ' ' && (a[i + 1] >= 97 && a[i + 1] <= 122))
				a[i + 1] = toupper(a[i + 1]);
			else 
				continue;	
		}
		printf("%s\n", a);	
	}
	return 0;	
} 
