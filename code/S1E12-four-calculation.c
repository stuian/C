# include <stdio.h>

int main()
{
	float a,c;
	char b;
	
	printf("请输入四则运算的表达式:"); 
	scanf("%f%c%f",&a,&b,&c);
	switch (b)
	{
		case '+': printf("结果是：%.2f",a + c);break;
		case '-': printf("结果是：%.2f",a - c);break;
		case '*': printf("结果是：%.2f",a * c);break;
		case '/': printf("结果是：%.2f",c !=0 && (float)a / c);break;
		default : printf("请输入四则运算的表达式。"); 
	}
}
