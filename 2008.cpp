#include<stdio.h>
int main()
{
	int n, i, negative, zero, positive;
	float num;
	while(scanf("%d", &n) != EOF && n != 0)
	{
		negative = 0;
		zero= 0;
		positive = 0;
		for(i = 0; i < n; i++)
		{
			scanf("%f", &num);
			if(num < 0)
				negative++;
			else if(num == 0)
				zero++;
			else
				positive++;			
		}	
		printf("%d %d %d\n", negative, zero, positive);
	}
	return 0;
}
