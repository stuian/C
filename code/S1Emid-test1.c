# include <stdio.h>

int main()
{
	unsigned x=1,y=2,i = 1;
	unsigned sum = 2;
	
	while (i<4000000)
	{
		i = x+y;
		if (i%2 == 0)
		{
			sum = sum + i;
		}
		x = y;
		y = i;
	}
	
	printf("������4���������ֵΪż������֮��Ϊ��%d",sum);
	
	return 0;
}
