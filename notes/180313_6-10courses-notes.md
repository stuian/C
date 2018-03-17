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


### 四、算术运算符 ###

#### 4.1 知识点 ####

- 常用运算符：加减乘除等；
- 目：取决于操作数的个数，比如：2 + 3 就是双目。因为有2，3两个操作数。
- 表达式：运算符和括号将操作数结合组成的式子
- 类型转换：一般是整型向浮点数转换，如果想把浮点数转换成整型，可以如下做：1 + (int)1.2

#### 4.2 代码 ####

1、按揭贷款



2、本息和计算

	# include <stdio.h>
	# include <math.h>
	
	int main()
	{
		// 定义变量
		float p1,p2_before,p2_after,p3;
		
		// 一次性定期存5年(不计复利)
		p1 = 10000*(1+0.0275*5);
		
		// 先存3年定期，到期后本息再存2年定期
		p2_before = 10000*(1+0.0275*3);
		p2_after = p2_before * (1+0.0275*2);
		
		// 存一年定期，到期后本息再存一年定期，连续存5次
		p3 = 10000 * pow(1+0.0175,5) ;
		
		// 打印结果	
		printf("一次性定期存5年，本息和为%f\n",p1);
		printf("存3年定期，到期后本息再存2年定期，本息和为%f\n",p2_after);
		printf("存一年定期，到期后本息再存一年定期，连续存5次，本息和为%f",p3);
	} 

### 五、关系运算符和逻辑运算符 ###

#### 5.1 知识点 ####

- 逻辑运算符：'!','&&','||'
- 关系运算符：>,<,=
- 短路求值：逻辑与和逻辑或，从左到右。例如：a = 0 && b = 5——a = 0为false，直接就不经过右边的b=5

#### 5.2 测试题 ####

1、为什么打印出来是a=144

	#include <stdio.h>
	
	int main()
	{
	        unsigned char a, b, c;
	
	        b = c = 200;
	        a = b + c;
	
	        printf("a = %u\n", a);
	
	        return 0;
	}

将十进制的200化成二进制然后进行相加，由于一个字符只占一个字节，肯定有溢出的数字，去掉溢出的第一位数字就得到了144的二进制。

#### 5.3 代码操作 ####

