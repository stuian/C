# include <stdio.h>
int main()
{
	int year = 0;
	float remaining_sum = 400;
	
	
	while (remaining_sum>0)
	{
		remaining_sum = remaining_sum - 50;
		year = year + 1;
		remaining_sum = remaining_sum* (1+0.08);
	}
	printf("%d���С����ܹ������еļҲ����ٴλص�һƶ��ϴ...",year); 
	
	return 0;
}
