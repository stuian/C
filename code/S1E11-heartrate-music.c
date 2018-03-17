# include <stdio.h>
# include "ssebtr1.h"

int main()
{
	int age;
	int high_rate,bpm = 150;
	int i;
	
	printf("请输入您的年龄：");
	scanf("%d",&age);
	
	high_rate = 220 - age;
	
	playSound(bpm);
	printf("传感器休眠五分钟。");
	
	i = getHeartRate();
	if (i > high_rate)
	{
		printf("请马上停止跑步，否则会有生命危险......");
	}
	else //这里最好还是用else if，不要嵌套 
	{
		if (i > bpm*0.85)
		{
			printf("请放慢脚步");
			playSound(bpm-20);
		}
		else
		{
			if (i < bpm*0.75)
			{
				printf("Come on,请加快节奏！");
				playSound(bpma+20);
			}
			else
			{
				playSound(bpm);
			}
		}
	}
		
}


