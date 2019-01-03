# include <stdio.h>

# define MAX 1024

//实现str(len) 

int main()
{
	char str[MAX];
	
	printf("请输入一个字符串：");
	
	fgets(str,MAX,stdin);
	
	printf("您输入的内容是：%s",str);
	
	return 0;
}
