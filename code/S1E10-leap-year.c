# include <stdio.h>

int mian () 
{
	
	int year;
	 
	printf("������һ�����: ");
	scanf("%d",&year);
	
	if (year%4 == 0 && year%100 != 0)
	{
		printf("%d���Ǹ����ꡣ",year);
	}
	else if (year%400 == 0)
	{
		printf("%d���Ǹ����ꡣ",year);
	}
	else
		printf("%d�겻�Ǹ����ꡣ",year);
	return 0;
}
