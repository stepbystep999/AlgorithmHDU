#include<stdio.h>
__int64 maxnum(__int64 a, __int64 b)
{
	if(a > b)
		return a;
	else
		return b;
}
int main()
{
	int n, i, j;
	__int64 a[1005], b[1005];
	__int64 max;
	while(scanf("%d", &n) != EOF && n != 0)
	{
		for(i = 0; i < n; i++)
		{
			scanf("%I64d", &a[i]);
			b[i] = a[i];
		}		
		for(i = 0; i < n; i++)
		{
			max = 0;
			//max = a[i];	为什么注释掉到部分代码必须设定 max = a[i];？ 
			for(j = 0; j < i; j++)
				if((max < b[j]) && (a[j] < a[i]))
					max = b[j];
			b[i] += max;
			//或者如下代码： 
				//if(a[j] < a[i])	
					//max = maxnum(b[j] + a[i], max);
			//b[i] = max;
		}
		max = 0;
		for(i = 0; i < n; i++)
			if(b[i] > max)
				max = b[i];
		printf("%I64d\n", max);
	}
	return 0;
} 
