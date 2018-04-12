# include <stdio.h>
int main()
{
	// 1000以内有多少素数:下面这个算法把1排除了 
	
	// 其他策略：1、i/2 ; i % j
	
	int i = 1,half,n,count = 0;
	do
	{
		//求一个数是不是素数
		if (i % 2 == 0)
		{
//			printf("%d不是素数\n",i);
			;
		}
		else
		{
			half = i / 2;
			
			if (half == 1)
			{
//				printf("%d是素数\n",i);
				count = count + 1;
			}
			else
			{
				for(n = 2;n <= half;n++)
				{
					if (i % n == 0)
					{
//						printf("%d不是素数\n",i);
						break;
					}
					else
					{
						if (n == half) 
						{
//							printf("%d是素数\n",i);
							count = count + 1;
						}	
					} 
				}
				
			}
		}
	
	i += 1;
	
	}while(i <= 10000) ;
	
	printf("10000以内共有%d个素数",count + 1);
	
	
		
		
		
	
	
	return 0;
}
