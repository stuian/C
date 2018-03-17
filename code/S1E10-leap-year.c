# include <stdio.h>

int mian () 
{
	
	int year;
	 
	printf("请输入一个年份: ");
	scanf("%d",&year);
	
	if (year%4 == 0 && year%100 != 0)
	{
		printf("%d年是个闰年。",year);
	}
	else if (year%400 == 0)
	{
		printf("%d年是个闰年。",year);
	}
	else
		printf("%d年不是个闰年。",year);
	return 0;
}
