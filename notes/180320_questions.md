## C语言学习-第一季C语言语法学习中的问题 ##

### 1、S1E13将字符串中的数字转出 ###

	# include <stdio.h>
	
	int main()
	{
		int ch;
		int num = 0;
		
		printf("请输入待转换的字符串：");
		
		do
		{
			ch = getchar();
			printf("%d",ch);
			
			if (ch >= '0' && ch<= '9') //十进制为48和57 
			{
				num = 10*num + (ch-'0');
				printf("%d\n",num);
			}
			else
			{
				if(num)
				{
					break; //已有数字，则退出循环。 
				}
			}
		}
		while (ch != '\n'); 
		
		printf("结果是：%d\n",num);
		
		return 0;
	}

> num = 10*num + (ch-'0');基本上懂了，只是这个式子还是不太明白，为什么这样算就能得到结果。
