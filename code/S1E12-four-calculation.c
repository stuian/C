# include <stdio.h>

int main()
{
	float a,c;
	char b;
	
	printf("��������������ı��ʽ:"); 
	scanf("%f%c%f",&a,&b,&c);
	switch (b)
	{
		case '+': printf("����ǣ�%.2f",a + c);break;
		case '-': printf("����ǣ�%.2f",a - c);break;
		case '*': printf("����ǣ�%.2f",a * c);break;
		case '/': printf("����ǣ�%.2f",c !=0 && (float)a / c);break;
		default : printf("��������������ı��ʽ��"); 
	}
}
