# include <stdio.h> 

int main()
{
	int i = 10;
	int sum = 23;
	
	while (i<1000)
	{
		if (i%3 == 0 || i%5 == 0)
		{
			sum = sum + i;
		}
//		printf("%d\n",sum);
		i = i + 1;
//		printf("%d\n",i);
	}
	
	
	printf("1000���µ���Ȼ���У�����3��5�ı���������֮��Ϊ��%d",sum);
	
	return 0;
}
