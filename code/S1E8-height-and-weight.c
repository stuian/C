# include <stdio.h>

int main()
{
	char name[256];
	float height,weight;
	
	
	
	printf("请输入你的姓名：");
	scanf("%s",&name);
	
	printf("请输入你的身高：");
	scanf("%f",&height);
	
	printf("请输入你的体重：");
	scanf("%f",&weight);
	
	printf("========正在为您转换========") ;
	printf("%c的身高是%f(in),体重是%f(lb)。",name,height/2.54,weight/0.4535924);
}
