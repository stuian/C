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
	printf("�ằ��Ӧ�ø��������%llu�����ӣ�\n���ÿ25000������1kg����ôӦ�ø�%llukg���ӣ�",sum,weight);
}
