# include <stdio.h>
int main()
{
	// 1000�����ж�������:��������㷨��1�ų��� 
	
	// �������ԣ�1��i/2 ; i % j
	
	int i = 1,half,n,count = 0;
	do
	{
		//��һ�����ǲ�������
		if (i % 2 == 0)
		{
//			printf("%d��������\n",i);
			;
		}
		else
		{
			half = i / 2;
			
			if (half == 1)
			{
//				printf("%d������\n",i);
				count = count + 1;
			}
			else
			{
				for(n = 2;n <= half;n++)
				{
					if (i % n == 0)
					{
//						printf("%d��������\n",i);
						break;
					}
					else
					{
						if (n == half) 
						{
//							printf("%d������\n",i);
							count = count + 1;
						}	
					} 
				}
				
			}
		}
	
	i += 1;
	
	}while(i <= 10000) ;
	
	printf("10000���ڹ���%d������",count + 1);
	
	
		
		
		
	
	
	return 0;
}
