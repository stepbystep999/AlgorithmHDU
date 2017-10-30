#include<stdio.h>
#include<math.h>
int main()
{
	int i, w, h, sum, len;
	long long mx, my, nx, ny, high, highy;
	double m, n;
	while(scanf("%lf%lf", &m, &n) !=EOF)
	{
		my = (long long)sqrt(m - 1) + 1;
		mx = my - ((long long)m - ((long long)sqrt(m - 1)) * ((long long)sqrt(m - 1)));
		ny = (long long)sqrt(n - 1) + 1;
		nx = ny - ((long long)n - ((long long)sqrt(n - 1)) * ((long long)sqrt(n - 1)));
		w = abs(mx - nx);
		h = abs(my - ny);		
		sum = h + w;
		if(w > h)
			printf("%d\n", sum);
		else
		{
			len = h - w;
			if(len % 2 == 0)
				sum += len;
			else
			{
				if(my > ny)
				{
					high = (long long)n;
					highy = ny;
				}	
				else
				{
					high = (long long)m;
					highy = my;
				}	
				if((high % 2 == 0 && highy % 2 == 0) || (high % 2 == 1 && highy % 2 == 1))
					sum += len - 1;
				else
					sum += len + 1;	
			}
			printf("%d\n", sum);
		}
	}
	return 0;	
} 
