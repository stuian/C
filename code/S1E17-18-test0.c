# include <stdio.h>

int main()
{
	int year;
	int day;
	int i;
	
	int more[13] = {[1]=31,[3]=31,[5]=31,[7]=31,[8]=31,[10]=31,[12]=31};
	int less[13] = {[4]=30,[6]=30,[9]=30,[11]=30};
	
	printf("请输入一个年份：");
	scanf("%d",&year);
	
	for (i = 1;i<=12;i++)
	{
		if(more[i]!=0)
		{
			printf("%d月份 : %d天\n",i,more[i]);
		}
		if(less[i]!=0)
		{
			printf("%d月份 : %d天\n",i,less[i]);
		}
		
		if ( i == 2 )
		{
			if ((year%4 == 0 && year%100 != 0) || year % 400 == 0)
			{
				day = 29;
				printf("%d月份 : %d天\n",i,day);
			}
			else
			{
				day = 28;
				printf("%d月份 : %d天\n",i,day);
			}
		}
	}
	

}
