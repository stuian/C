# include <stdio.h>
# include <math.h>

int main()
{
	double jiayu;
	double heiye;
	int year;
	
	
	for (year = 1;;year++)
	{
		jiayu = 10000*0.1*year + 10000;
		heiye = 10000*pow(1+0.05,year);
		if (heiye > jiayu)
		{
			printf("%d��󣬺�ҹ��Ͷ�ʶ��С���㣡\n",year);
			printf("С�����Ͷ�ʶ��ǣ�%.2f\n",jiayu);
			printf("��ҹ��Ͷ�ʶ��ǣ�%.2f\n",heiye);
			break;
		}
			
	}
	
}
