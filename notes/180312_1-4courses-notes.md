# C语言学习-第一季C语言语法

> 资源来源：小甲鱼=鱼c工作室

**目录**

- 第一个程序
- 打印
- 变量
- 常量和宏定义

### 一、第一个程序 ###

#### 1.1 莫斯密码 ####

莫斯密码的原理其实是将字母和数字用点和横线两种符号的不同组合来表示。

#### 1.2 机器码 ####

机器的编码是二进制，它只能看懂0和1，我们把0和1组合叫做机器码。cpu能将0和1的组合和具体的指令联系起来，指导机器工作。

#### 1.3 汇编语言 ####

想要机器码打印出一段“hello world”是极其麻烦的。于是就有了汇编语言。

助记符->机器码；通过助记符辅助编程，再由汇编编译器将其转化成机器码）

#### 1.4 c语言 ####

处理流程：c语言->汇编语言->机器语言->cpu执行

c语言的优点：灵活度，可移植性，效率高

> 解释型语言,例如：java；java->字节码->解释器->cpu执行

#### 1.5 第一个程序：hello world ####

    #include <stdio.h> 
    int main()
    {
    	printf("Hell0,world!\c");
    }

#### 1.6 测试题（自己想的，可能不对） ####

0.为什么我们说计算机其实是“二傻子”

> 因为计算机只看得懂0和1

1.cpu唯一认识的语言是机器语言

2.c语言编写的源代码转换成汇编语言的过程叫做编译

3.编译型语言和解释型语言的本质区别是前者通过编译直接转成成机器语言；后者需要通过中间介质解释器，再由解释器转换成机器语言。

4.在Linux系统上用c语言编译的可执行程序，也能在windows系统上执行。

5.解释型编程语言是如何实现跨平台的？

6.莫斯密码的原理其实是将字母和数字用点和横线两种符号的不同组合来表示。

**答案：**

![](https://github.com/stuian/C/blob/master/pictures/test1.png?raw=true)

![](https://github.com/stuian/C/blob/master/pictures/test2.png?raw=true)

![](https://github.com/stuian/C/blob/master/pictures/test3.png?raw=true)

#### 1.7 动动手-写一个计算代码量的程序 ####

windows：

	#include <io.h>
	#include <direct.h>
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	
	#define MAX 256
	
	long total;
	int countLines(const char *filename);
	void findAllCodes(const char *path);
	void findAllFiles(const char *path);
	
	int countLines(const char *filename)
	{
		FILE *fp;
		int count = 0;
		int temp;
		
		if ((fp = fopen(filename,"r")) == NULL)
		{
			fprintf(stderr,"Can not open the file:%s\n",filename);
			return 0;
		}
		
		while((temp = fgetc(fp)) != EOF)
		{
			if (temp == '\n')
			{
				count++;
			}
		}
		
		fclose(fp);
		
		return count;
	}
	
	void findAllCodes(const char *path)
	{
		struct _finddata_t fa;
		long handle;
		char thePath[MAX], target[MAX];
		
		strcpy(thePath,path);
		if((handle = _findfirst(strcat(thePath,"/*.c"),&fa)) != -1L)
		{
			do
			{
				sprintf(target,"%s/%s",path,fa.name);
				total += countLines(target);
			}while(_findnext(handle,&fa) == 0);
		}
		
		_findclose(handle);
	}
	
	void findAllDirs(const char *path)
	{
		struct _finddata_t fa;
		long handle;
		char thePath[MAX];
		
		strcpy(thePath,path);
		if((handle = _findfirst(strcat(thePath,"/*"),&fa)) == -1L)
		{
			fprintf(stderr,"The path %s is wrong!\n",path);
			return;
		}
		
		do
		{
			if(!strcmp(fa.name,".") || !strcmp(fa.name,".."))
				continue;
				
			if(fa.attrib == _A_SUBDIR)
			{
				sprintf(thePath,"%s/%s",path,fa.name);
				findAllCodes(thePath);
				findAllDirs(thePath);
			}
		}while(_findnext(handle,&fa)==0);
		
		_findclose(handle);
	}
	
	int main()
	{
		char path[MAX] = ".";
		
		printf("计算中...\n");
		
		findAllCodes(path);
		findAllDirs(path);
		
		printf("目前你总共写了%ld行代码！\n\n",total);
		system("pause");
		
		return 0;
	}

### 二、打印 ###

#### 2.1 知识点 ####

- 当代码很长的时候可以在后面加“\”，然后回车在下行接着写。
- 可见字符和转义字符
	- 可见字符：类似@，*等
	- 转义字符见下表：
	- ![](https://github.com/stuian/C/blob/master/pictures/c1.png?raw=true)

#### 作业 ####

打印一架飞机

代码1：

	#include <stdio.h>
	
	int main()
	{
	        printf("\n\
	         @\n\
	        / \\\n\
	        * *\n\
	        * *\n\
	        * *\n\
	    * * * * * *\n\
	  * * * * * * * *\n\
	* * * * * * * * * *\n\
	        * *\n\
	        * *\n\
	      * * * *\n\
	    * * * * * *\n");
	
	        return 0;
	}

代码2：

#include <stdio.h>

	int main()
	{
	        printf("\n");
	        printf("         @\n");
	        printf("        / \\\n");
	        printf("        * *\n");
	        printf("        * *\n");
	        printf("        * *\n");
	        printf("        * *\n");
	        printf("    * * * * * *\n");
	        printf("  * * * * * * * *\n");
	        printf("* * * * * * * * * *\n");
	        printf("        * *\n");
	        printf("        * *\n");
	        printf("      * * * *\n");
	        printf("    * * * * * *\n");
	
	        return 0;
	
	}

代码3：

	#include <stdio.h>
	
	int main()
	{
	        printf("\n"
	        "         @\n"
	        "        / \\\n"
	        "        * *\n"
	        "        * *\n"
	        "        * *\n"
	        "        * *\n"
	        "    * * * * * *\n"
	        "  * * * * * * * *\n"
	        "* * * * * * * * * *\n"
	        "        * *\n"
	        "        * *\n"
	        "      * * * *\n"
	        "    * * * * * *\n");
	
	        return 0;
	
	}

### 三、变量 ###

#### 3.1 变量名的命名要求 ####

- 只能包含字母，数字和下划线
- 只能以字母或者下划线开头
- 不能和关键字重复

> 44个关键字（n11，c99）：如下图

![](https://github.com/stuian/C/blob/master/pictures/c3.jpg?raw=true)

#### 3.2 数据类型 ####

- char
- int
- float
- double

> 决定了存放数据的大小。

> %.9d：小数点后九位

#### 3.3 测试题： ####

- 0 程序处理的两种基本数据对象是常量和变量。
- 1 变量由变量名和存储单元组成。变量名用于确定目标，存储单元用于存放变量的值。
- 3 C语言经历了ANSI C，C99,C11三大标准的变革，这三大标准定义的是c语言的标准和准则，即定义了c语言的语法。
- 4 c语言内部使用的名字，这些名字具有特殊的含义。

#### 3.4 动手： ####

1、赋值

    # include <stdio.h>
    int main()
    {
    	int a;int b;
    	b = 3;
    	a = b;
    	b = b * 2;
    	printf("%d,%d",a,b);
    }

2、求圆的周长和面积

	# include <stdio.h>
	int main()
	{
		int r;
		int c;
		int s;
		r = 5;
		c = 2 * 3.14 * r;
		s = 3.4 * r * r;
		printf("半径为%d的圆，周长是%.2f,面积是%.2f",r,c,s); 
	}

3、练习一些打印


#include <stdio.h>

int main()
{
        printf("打印五个字符：%c %c %c %c %c\n", 70, 105, 115, 104, 67);
        printf("前边用 填充：%10d\n", 2015);
        printf("前边用0填充：%010d\n", 2015);
        printf("右对齐，保留2位：%10.2f\n", 3.1416);
        printf("左对齐，保留3位：%-10.3f\n", 3.1416);
        printf("右对齐，指数形式：%10e\n", 520000.0);
        printf("左对齐，指数形式：%-10E\n", 520000.0);

        return 0;
}

> 为什么打印五个字符是用70，105，115，104，67，输出的确实英文字母呢

### 四、常量和宏定义 ###

#### 4.1 知识点 ####

![](https://github.com/stuian/C/blob/master/pictures/c4.jpg?raw=true)

符号常量的定义

    #define MAX 256

> 标识符:包括常量，变量，函数等的名称
> \0：识别字符串的结束

#### 4.2 测试题 ####

- 0 我们把为程序中的变量、类型、函数和标签起的名字叫做标识符。
- 1 main是一个合法的标识符。
- 2 字符串是常量。
- 3 在c语言中，转义字符'\n'占一个字节的空间。
- 4 字符串“FishC”由'F'，'i','s','h','C'这些英文字符以及结束标志'\0'构成。
- 5 常量也有数据类型吧，字符常量，整型常量，符号常量等等。

#### 4.3 动动手-define ####

1、 换行替代
	
	# include <stdio.h>
	# define NL '\n'
	
	int main()
	{
		
		printf("Line1%c",NL);
		printf("Line2%c",NL);
	}

2、

	# include <stdio.h>
	# define PI 3.14159
	# define S(r) PI*r*r
	# define C(r) 2*PI*r
	
	int main()
	{
		int r = 5;
		printf("半径为%d的圆，面积是：%.2f,周长是：%.2f\n",r,S(r),C(r));
		return 0;
	}

3、

	# include <stdio.h>
	# define fanqie 3.7/2
	# define qilan 7/2
	# define xiqin 1.3/2
	# define kongxincai 8/2
	# define yangcong 2.4/2
	# define youcai 9/2
	# define huanggua 6.3/2
	# define bailuobo 0.5/2
	
	int main() 
	{
		printf("小明需要支付%.2f元\n",2*fanqie + 1*kongxincai + 1*youcai);
		printf("小红需要支付%.2f元\n",3*xiqin + 0.5*yangcong + 5*huanggua);
		printf("小甲鱼需要支付%.2f元\n",10*huanggua + 20*bailuobo);
	}





