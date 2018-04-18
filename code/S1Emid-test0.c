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
	
	
	printf("1000以下的自然数中，属于3或5的倍数的数字之和为：%d",sum);
	
	return 0;
}
