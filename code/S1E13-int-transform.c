# include <stdio.h>

int main()
{
	int ch;
	int num = 0;
	
	printf("�������ת�����ַ�����");
	
	do
	{
		ch = getchar();
		printf("%d",ch);
		
		if (ch >= '0' && ch<= '9') //ʮ����Ϊ48��57 
		{
			num = 10*num + (ch-'0');
			printf("%d\n",num);
		}
		else
		{
			if(num)
			{
				break; //�������֣����˳�ѭ���� 
			}
		}
	}
	while (ch != '\n'); 
	
	printf("����ǣ�%d\n",num);
	
	return 0;
}
