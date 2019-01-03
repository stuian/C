# include <stdio.h>
# define NULL ((void *)0) 


int main() 
{
	int *p1;
	int *p2 = NULL;
	
	return 0;
}

//其他指针可以转换成void类型指针；
//void类型指针强制转换成其他类型 
//如果不知道指针要指向哪，就把它赋值给NULL 
