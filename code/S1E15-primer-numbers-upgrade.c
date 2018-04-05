# include <stdio.h>
# include <math.h>

int main()
{
	int i,half,n;
	
	scanf("%d",&i);
	
	//求一个数是不是素数
	if (i == 1)
	{
		printf("%d是素数\n",i);
		
	}
	else
	{
		half = (int)sqrt(i);
		for(n = 2;n <= half;n++)
		{
			if (i % n == 0)
			{
				printf("%d不是素数\n",i);
				break;
			}
			else
			{
				if (n == half) 
				{
					printf("%d是素数\n",i);
				}	
			} 
		}
	}
}
