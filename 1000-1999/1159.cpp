#include<stdio.h>
#include<string.h> 
int max(int a, int b)
{
	if(a > b)
		return a;
	else
		return b;
}
int main()
{
	int i, j, len1, len2;
	int num[505][505];
	char a[505], b[505];
	while(scanf("%s%s", a, b) != EOF)
	{
		len1 = strlen(a);
		len2 = strlen(b);
		memset(num, 0, sizeof(num));
		for(i = 0; i < len1; i++)
			for(j = 0; j < len2; j++)
			{
				if(a[i] == b[j])
					num[i + 1][j + 1] = num[i][j] + 1;
				else
					num[i + 1][j + 1] = max(num[i + 1][j], num[i][j + 1]);
			}
		printf("%d\n", num[len1][len2]);
	}	
	return 0;
}
