# include <stdio.h> 
# include <math.h>

int main()
{
	// 600851475143
	
	long long i,j,k,l,num	= 600851475143;
	
	_Bool flag = 1; 
	
	for (i = 2,j = num /i;flag != 0;i++,j = num/i , flag = 1)
	{
		if (i * j == num)
		{
			k = sqrt((double)j);
			for (l = 2;l <= k;l++)
			{
				if(j % l == 0)
				{
					flag = 0;
					break;
				}
			}
			if (flag)
			{
				break;
			}
		}
	}
	
	printf("%lld\n",j); // 6857
	
	return 0;
	
	
}
