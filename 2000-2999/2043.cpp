#include<stdio.h>
#include<string.h>
int main()
{
	int n, i, j, k, len, flag[4], sum;
	char a[52], sign[7] = {'~', '!', '@', '#', '$', '%', '^'};
	while(scanf("%d", &n) != EOF)
	{
		getchar();
		for(i = 0; i < n; i++)
		{
			gets(a);
			len = strlen(a);
			if(len >= 8 && len <= 16)
			{
				memset(flag, 0, sizeof(flag));
				for(j = 0; j < len; j++)
					if(a[j] >= 'A' && a[j] <= 'Z')
					{
						flag[0]++;
						break;
					}
				for(j = 0; j < len; j++)
					if(a[j] >= 'a' && a[j] <= 'z')
					{
						flag[1]++;
						break;
					}
				for(j = 0; j < len; j++)
					if(a[j] >= '0' && a[j] <= '9')
					{
						flag[2]++;
						break;
					}
				for(j = 0; j < len; j++)
				{ 
					for(k = 0; k < 7; k++) 
						if(a[j] == sign[k])
						{
							flag[3]++;
							break;
						}
					if(flag[3] == 1)
						break; 
				} 
				sum = 0;
				for(j = 0; j < 4; j++)
					sum += flag[j];
				if(sum >= 3)
					printf("YES\n");
				else
					printf("NO\n");
			}
			else
				printf("NO\n");
		}		
	}
	return 0;
}
