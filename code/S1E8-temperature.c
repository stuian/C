#include <stdio.h>
int main()
{
	/* ��f=0,20,...300ʱ���ֱ��ӡ�����¶Ⱥ������¶ȣ�fΪ�����¶ȣ�cΪ�����¶�*/
	
	int c,f;
	int low,high;
	low=0;high=300;f=low;
	while (f<=high) {
		c = 5*(f-32)/9;
		printf("�����¶�Ϊ%dʱ�������¶�Ϊ%d\n",f,c);
		f=f+20;
		
	}
	
}
