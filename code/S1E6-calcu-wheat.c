# include <stdio.h>
# include <math.h>

int main()
{
	int i;
	unsigned long long temp,sum,weight;
	sum = 0;
	for (i = 0;i < 64;i++)
	{
		temp = pow(2,i);
		sum = sum + temp;		
	}
	
	weight = sum/25000;
	printf("舍罕王应该给予达依尔%llu粒麦子！\n如果每25000粒麦子1kg，那么应该给%llukg麦子！",sum,weight);
}
