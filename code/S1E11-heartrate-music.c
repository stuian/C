# include <stdio.h>
# include "ssebtr1.h"

int main()
{
	int age;
	int high_rate,bpm = 150;
	int i;
	
	printf("�������������䣺");
	scanf("%d",&age);
	
	high_rate = 220 - age;
	
	playSound(bpm);
	printf("��������������ӡ�");
	
	i = getHeartRate();
	if (i > high_rate)
	{
		printf("������ֹͣ�ܲ��������������Σ��......");
	}
	else //������û�����else if����ҪǶ�� 
	{
		if (i > bpm*0.85)
		{
			printf("������Ų�");
			playSound(bpm-20);
		}
		else
		{
			if (i < bpm*0.75)
			{
				printf("Come on,��ӿ���࣡");
				playSound(bpma+20);
			}
			else
			{
				playSound(bpm);
			}
		}
	}
		
}


