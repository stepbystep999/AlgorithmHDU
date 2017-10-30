#include<stdio.h>
#include<string.h>
int main()
{
	int i, len;
	char a[102], max;
	while(gets(a))
	{
		len = strlen(a);		
		max = a[0];
		for(i = 1; i < len; i++)
			if(a[i] > max)
				max = a[i];
		for(i = 0; i < len; i++)
		{
			printf("%c", a[i]);
			if(a[i] == max)
				printf("(max)");
		}
		printf("\n");
	}
	return 0;
}
