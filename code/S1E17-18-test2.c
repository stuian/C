#include <stdio.h>

int main()
{
        long count = 0;
        int year1,year2,year3;
        int month1,month2,month3;
        int day1,day2,day3;
        int remainday;
        float percentage;
        int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
        
        // ����˼ά��������ĩ������ȥ����ʼ���ڣ����Ǵӳ�ʼ����һֱ�ӵ�ĩ�����ڡ� 
        // 1998-05-20 ; 2016-03-28
        
		printf("������������գ���1998-05-20��:");
        scanf("%d-%d-%d",&year1,&month1,&day1);
        
        printf("������������ڣ���2016-03-28��:");
        scanf("%d-%d-%d",&year2,&month2,&day2);
        
        year3 = year2 + 80;
        month3 = month2;
        day3 = day2;
        
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
		while(year2 <= year3)
		{
			days[1] = (year2 % 400 == 0 || (year2 % 4 == 0 && year2 % 100 != 0)) ? 29 :28;
			while (month2 <= 12)
			{
				while (day2 <= days[month2 - 1])
				{
					if (year2 == year3 && month2 == month3 && day2 == day3)
					{
						goto FINISH2;
					}
					day2 ++;
					remainday ++;
				}
				day2 = 0;
				month2 ++;
			}
			month2 = 0;
			year2 ++;
		}
        
FINISH:printf("��������������ܹ�������%d��\n",count);
FINISH2:printf("����ܻ80�꣬�㻹ʣ��%d��\n",remainday);

		printf("���Ѿ�ʹ����%.2f\%����������ú���ϧʣ�µ�ʱ�䣡",(float)count / (remainday + count));

        return 0;
}
