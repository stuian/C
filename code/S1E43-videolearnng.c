# include <stdio.h>

//�ṹ��Ƕ�� 

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
 } book = {"������ѧc����ɡ�","С����",48.8,{2017,11,11},"�廪��ѧ������"};//ȫ�ֱ���book 

// ����ṹ������
//struct Book
//{
//	char title[123];
//	char author[40];
//	float price;
//	struct Date date;
//	char publisher[40];
// } book[12];
 //or struct �ṹ������ ������[���鳤��] ��
 
 //����ṹ��ָ��
 struct Book * pt; 
 pt = &book;
 
 //ָ����ʽṹ��
 //1����*�ṹ��ָ�룩.��Ա��
 //2���ṹ��ָ��->��Ա�� 

int main()
{
	//��������
	//1��
	printf("%s",(*pt).title); 
	
	return 0;
}
