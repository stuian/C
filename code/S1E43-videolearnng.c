# include <stdio.h>

//结构体嵌套 

struct Date
{
	int year;
	int month;
	int day;
};

struct Book
{
	char title[123];
	char author[40];
	float price;
	struct Date date;
	char publisher[40];
 } book = {"《带你学c带你飞》","小甲鱼",48.8,{2017,11,11},"清华大学出版社"};//全局变量book 

// 定义结构体数组
//struct Book
//{
//	char title[123];
//	char author[40];
//	float price;
//	struct Date date;
//	char publisher[40];
// } book[12];
 //or struct 结构体名词 数组名[数组长度] ；
 
 //定义结构体指针
 struct Book * pt; 
 pt = &book;
 
 //指针访问结构体
 //1、（*结构体指针）.成员名
 //2、结构体指针->成员名 

int main()
{
	//访问书名
	//1、
	printf("%s",(*pt).title); 
	
	return 0;
}
