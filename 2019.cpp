#include<stdio.h>
int main()
{
	int n, m, i, index, num[10002];
	while(scanf("%d%d", &n, &m) != EOF && (n != 0 || m != 0))
	{
		for(i = 0; i < n; i++)
			scanf("%d", &num[i]);
		for(i = 0; i < n; i++) 
			if(m < num[i])
			{
				index = i;
				break;
			}
		for(i = n - 1; i >= index; i--)
			num[i + 1] = num[i];
		num[index] = m;
		for(i = 0; i < n; i++)
			printf("%d ", num[i]);
		printf("%d\n", num[i]);	
	}
	return 0;
}
