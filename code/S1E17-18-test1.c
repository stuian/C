#include <stdio.h>

int main()
{
        long count = 0;
        int year1,year2;
        int month1,month2;
        int day1,day2;
        int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
        
        printf("������������գ���1998-05-20��:");
        scanf("%d-%d-%d",&year1,&month1,&day1);
        
        printf("������������ڣ���2016-03-28��:");
        scanf("%d-%d-%d",&year2,&month2,&day2);
        
        while(year1 <= year2)
        {
        	days[1] = (year1 % 400 == 0 || (year1 % 4 == 0 && year1 % 100 != 0)) ? 29 : 28;
        	while (month1 <= 12)
        	{
        		while (day1 <= days[month1 - 1])
        		{
        			if (year1 == year2 && month1 == month2 && day1 == day2)
        			{
        				goto FINISH;
					}
					day1++;
					count++;
				}
				day1 = 0;
				month1++;
			}
			month1 = 0;
			year1++;
		}
        
FINISH:printf("��������������ܹ�������%d��\n",count);

        return 0;
}
