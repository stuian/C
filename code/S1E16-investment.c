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
			printf("%d年后，黑夜的投资额超过小甲鱼！\n",year);
			printf("小甲鱼的投资额是：%.2f\n",jiayu);
			printf("黑夜的投资额是：%.2f\n",heiye);
			break;
		}
			
	}
	
}
