#include<stdio.h>
#include<string.h> 
int main()
{
	int n, i, j, t1[3], t2[3], t3[3];
	while(scanf("%d", &n) != EOF)
	{
		for(j = 0; j < n; j++)
		{
			memset(t3, 0, sizeof(t3));
			for(i = 0; i < 3; i++)
				scanf("%d", &t1[i]);
			for(i = 0; i < 3; i++)
				scanf("%d", &t2[i]);
			for(i = 2; i >= 1; i--)
			{
				t3[i] += (t1[i] + t2[i]) % 60;
				if(t1[i] + t2[i] >= 60)
					t3[i - 1]++;	
			}
			t3[i] += t1[i] + t2[i];
			printf("%d %d %d\n", t3[0], t3[1], t3[2]);
		}
	}	
	return 0;
}
	
