#include<stdio.h>
#include<string.h>
int root(char num[])
{
	int len, i, sum = 0;
	len = strlen(num);
	for(i = 0; i < len; i++)
		sum = sum + (int)num[i] - 48;
	if(sum < 10)
		return sum;
	else
	{
		sprintf(num, "%d", sum);
		return root(num);
	}	
}
int main()
{
	char num[1005];
	while(gets(num) && strcmp(num, "0") != 0) 
	{
		printf("%d\n", root(num));
	}
	return 0;
}
