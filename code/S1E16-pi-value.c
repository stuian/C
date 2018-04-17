# include <stdio.h>
# include <math.h>

int main()
{
	int numer = 1;
	int denom;
	double pi = 1;
	double item;
	int i = 2;
	double threshold;
	
	threshold = pow(0.1,8);
	
	while (item<threshold)
	{
		denom = 2*i - 1;
		item = numer/(float)denom;
		printf("%f,%d,%f\n",item,denom,threshold);
		if (i/2==0)
		{
			pi = pi - item;
		}
		else
		{
			pi = pi + item;
		}
	}
	printf("pi的近似值为:%.7f",pi*4);
	
	return 0;
}
