# include <stdio.h>
# include <math.h>

int main()
{
	int i,half,n;
	
	scanf("%d",&i);
	
	//��һ�����ǲ�������
	if (i == 1)
	{
		printf("%d������\n",i);
		
	}
	else
	{
		half = (int)sqrt(i);
		for(n = 2;n <= half;n++)
		{
			if (i % n == 0)
			{
				printf("%d��������\n",i);
				break;
			}
			else
			{
				if (n == half) 
				{
					printf("%d������\n",i);
				}	
			} 
		}
	}
}
