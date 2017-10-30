#include<stdio.h>
int judge_year(int year)
{
	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		return 1;
	else
		return 0;
}

int main()
{
	int year, month, day, sum;
	char split;
	while(scanf("%d%c%d%c%d", &year, &split, &month, &split, &day) != EOF)
	{
		switch(month - 1)
		{
			case 0:
				sum = 0;
				break;
			case 1:
				sum = 31;
				break;
			case 2:
				sum = 59;
				break;
			case 3:
				sum = 90;
				break;
			case 4:
				sum = 120;
				break;
			case 5:
				sum = 151;
				break;
			case 6:
				sum = 181;
				break;
			case 7:
				sum = 212;
				break;
			case 8:
				sum = 243;
				break;
			case 9: 
				sum = 274;
				break;
			case 10:
				sum = 304;
				break;
			case 11:
				sum = 334;
				break;
		}
		sum += day;
		if(judge_year(year) == 1 && month > 2)
			sum++;
		printf("%d\n", sum);	
	}
	return 0;	
}
