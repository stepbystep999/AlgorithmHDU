#include<stdio.h>
#include<string.h>
int main()
{
	int n, i, j, k, flag, max, index, num[1005];
	char a[1005][16], b[1005][16];
	while(scanf("%d", &n) != EOF && n != 0)
	{
		getchar();
		k =0;
		memset(num, 0, sizeof(num));
		for(i = 0; i < n; i++)
		{
			gets(a[i]);
			if(k == 0)
			{
				strcpy(b[k++], a[i]);
				num[k]++;
				continue;
			}
			flag = 0;
			for(j = 0; j < k; j++)
			{
				if(strcmp(a[i], b[j]) == 0)
				{
					num[j]++;
					flag = 1;
					break;
				}		
			}
			if(flag == 0)
			{
				strcpy(b[k++], a[i]);
				num[k]++;
			}
		}
		max = num[0];
		index = 0;
		for(i = 1; i < k; i++)
			if(max < num[i])
			{
				max = num[i];
				index = i;
			}		
		printf("%s\n", b[index]);		
	}
	return 0;
} 
