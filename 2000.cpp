#include<stdio.h>
int main()
{
	char c[4], temp;
	int i, j, n = 3;
	while(gets(c))
	{
		for(int i = 0 ; i < n - 1; ++i)
		{  
        	for(int j = 0; j < n - i - 1; ++j)
			{  
            	if(c[j] > c[j + 1])  
            	{  
                	temp = c[j];
					c[j] = c[j + 1];
					c[j + 1] = temp;  
            	}
            } 
        }	
		printf("%c %c %c\n", c[0], c[1], c[2]);
	}
	return 0;
}
