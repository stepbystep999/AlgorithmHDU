#include<stdio.h>
#include<math.h>
int main()
{
	int n, i;
    double x1, x2, x3, y1, y2, y3, ans;
    while(scanf("%d",&n) != EOF)
    {
    	for(i = 0; i < n; i++)
    	{
    		scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
        	ans = 0;
       	 	ans = (y1 - y3) * (x3 - x2) - (y1 - y3) * (pow(x3 - x1, 3) - pow(x2 - x1, 3)) / (3.0 * pow(x3 - x1, 2)) + (y3 - y2) * (x3 - x2) / 2.0;
       	 	printf("%.2lf\n", ans);
		}
	}
    return 0;
}
