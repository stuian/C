# C语言学习-第一季C语言语法（2）

> 资源来源：小甲鱼=鱼c工作室
> 
> 写代码的时候不要想当然，有些代码在不同系统上运行结果不一样

**目录**

- 数据类型
- 取值范围
- 字符和字符串
- 算术运算符
- 关系运算符和逻辑运算符


### 一、数据类型 ###

#### 1.1 笔记 ####

![](https://github.com/stuian/C/blob/master/pictures/S1E6-%E6%95%B0%E6%8D%AE%E7%B1%BB%E5%9E%8B.png?raw=true)

#### 1.2 测试题 ####

- 0 根据定义，最长的是long long int 
- 2 sizeof()不是一个函数,是一个运算符。
- 3 约定俗成，一字节等于8比特位，但实际上不一定。
- 4 c标准只规定char类型占一个字节，其他数据类型只规定了相对范围。
- 5 sizeof后面如果跟的是数据类型则需要加括号
- 6 int默认是signed，即带符号位的整数（可以表示负数），需要用一半的存储空间来存放负数，所以unsigned int可以表示更大的整数。

#### 1.3 动手 ####

	# include <stdio.h>
	# include <math.h>
	
	int main()
	{
		int temp,sum,weight,i;
		sum = 0;
		for (i = 0;i < 64;i++)
		{
			temp = pow(2,i);
			sum = sum + temp;		
		}
		
		weight = sum/25000;
		printf("舍罕王应该给予达依尔%d粒麦子！\n如果每25000粒麦子为1kg，那么应该给%dkg麦子！",sum);
	}

> 犯了一个严重的错误是数据类型的大小不够

1、修改定义变量为：

	unsigned long long temp,sum,weight;

2、格式化字符也需从%d转为%llu

> 采用无符号位的数据类型，在用格式化字符是要用%u。

### 二、取值范围 ###

#### 2.1 笔记 ####

![](https://github.com/stuian/C/blob/master/pictures/S1E7-%E5%8F%96%E5%80%BC%E8%8C%83%E5%9B%B4.png?raw=true)

> 拓展阅读：浮点数用二进制表示（完全看不懂）

#### 2.2 代码操作 ####

1、数据类型不同，范围不同

	# include <stdio.h>
	int main()
	{
		signed char i;
		unsigned char j;
		
		i = 255;
		j = 255;
		
		printf("i的值是%d\n",i); 
		printf("j的值是%d",j); 
	}

2、浮点数的范围

	# include <stdio.h>
	# include <math.h>
	
	int main()
	{
		int i;
		double result;
		printf("请输入一个整数：");
		scanf("%d",&i);
		result = pow(i,5);
		printf("%d的五次方是：%.2f",i,result);
	}

### 三、字符和字符串 ###

#### 3.1 笔记 ####

1、char一定要定义它是否unsigned；它没有默认选项。

2、定义字符串:char 变量名[数量];——char a[5] = {'F','i','s','h','C'};

> 不要忘记加上\0：char a[6] = {'F','i','s','h','C','\0'}

#### 3.2 代码操作 ####

1、温度转换

	#include <stdio.h>
	int main()
	{
		/* 当f=0,20,...300时，分别打印华氏温度和摄氏温度；f为华氏温度，c为摄氏温度*/
		
		int c,f;
		int low,high;
		low=0;high=300;f=low;
		while (f<=high) {
			c = 5*(f-32)/9;
			printf("华氏温度为%d时，摄氏温度为%d\n",f,c);
			f=f+20;
			
		}
		
	}

2、身高和体重的转换

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


- 算术运算符
- 关系运算符和逻辑运算符