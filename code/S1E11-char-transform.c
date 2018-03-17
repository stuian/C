# include <stdio.h>

int main()
{
	char cha;
	
	printf("请输入一个英文字符：");
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
		printf("输入格式不正确，请输入一个英文字符。");
	}
}
