# include <stdio.h>

int main()
{
	char cha;
	
	printf("������һ��Ӣ���ַ���");
	scanf("%c",&cha);
	
	if (cha >= 65 && cha <=90)
	{
		cha = (int)cha + 32;
		printf("%c\n",cha);
	}
	else if (cha >= 97 && cha <=122)
	{
		cha = (int)cha - 32;
		printf("%c\n",cha);
	}
	else
	{
		printf("�����ʽ����ȷ��������һ��Ӣ���ַ���");
	}
}
