# C语言学习-第一季C语言语法（3）

> 资源来源：小甲鱼=鱼c工作室

**目录**

- if
- switch语句和分支嵌套
- while语句和do while语句
- for语句和循环嵌套
- break语句和continue语句

### 一、if ###

1.1 c语言变型

Steve Bourne的c语言变型，加入了以下头文件：

	#define STRING char *
	#define IF if(
	#define THEN ){
	#define ELSE }else{
	#define FI ;}
	#define WHILE while(
	#define DO ){
	#define OD ;}
	#define INT int
	#define BEGIN {
	#define END }

**一个小案例应用：**

	# include <stdio.h>
	
	#define IF if(
	#define THEN ){ 
	#define ELSE }else{ 
	#define FI ;}
	#define INT int
	#define BEGIN {
	#define END }
	
	INT main() 
	BEGIN
		INT i;
		
		printf("请输入您的年龄：");
		scanf("%d",&i);
		
		IF i < 18
		THEN 
			printf("您未满18周岁，不得使用这个程序！\n");
		ELSE
			printf("您已满18周岁，欢迎使用本教程，嘿嘿嘿...\n");
		FI
		
		return 0;
	
	END

1.2 代码操作

1、大小写字母转换

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

2、根据心率不同播放不同的音乐，头文件为杜撰，此代码不能运行。

	# include <stdio.h>
	# include "ssebtr1.h"
	
	int main()
	{
		int age;
		int high_rate,bpm = 150;
		int i;
		
		printf("请输入您的年龄：");
		scanf("%d",&age);
		
		high_rate = 220 - age;
		
		playSound(bpm);
		printf("传感器休眠五分钟。");
		
		i = getHeartRate();
		if (i > high_rate)
		{
			printf("请马上停止跑步，否则会有生命危险......");
		}
		else //这里最好还是用else if，不要嵌套 
		{
			if (i > bpm*0.85)
			{
				printf("请放慢脚步");
				playSound(bpm-20);
			}
			else
			{
				if (i < bpm*0.75)
				{
					printf("Come on,请加快节奏！");
					playSound(bpma+20);
				}
				else
				{
					playSound(bpm);
				}
			}
		}
			
	}



### 二、switch ###

#### 2.1 常出现的bug ####

- else悬挂：就算是一个语句也要加上{}
- 等于号带来的问题：=和==不要混淆

#### 2.2 代码实战 ####



### 三、 while语句和do while语句 ###

	do 
	{
		循环体
	}
	while ();

### 四、for语句和循环嵌套 ###

> 分支决定了哪些语句被执行，循环决定了语句被执行多少次。

打印九九乘法表