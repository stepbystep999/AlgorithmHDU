#include<stdio.h>
#include<math.h>
int main()
{
	int n, u, d, minutes;
	while(scanf("%d%d%d", &n, &u, &d) != EOF && (n != 0 || u != 0 || d != 0 ))
	{
		n -= u;
		minutes = ceil((double)n / (double)(u - d));
		minutes *= 2;
		minutes++;
		printf("%d\n", minutes); 
	}	
	return 0;
}
