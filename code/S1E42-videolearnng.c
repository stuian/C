# include <stdio.h>

//�ṹ�壻�ṹ������
//����ṹ�����ͱ�����struct �ṹ���� �ṹ���������
//cpu�Խṹ�����ݵ��ڴ���루4λΪ������ 

struct Book
{
	char title[123];
	char author[40];
	float price;
	unsigned int date;
	char publisher[40];
 } book;//ȫ�ֱ���book 

int main()
{
//	struct Book book;
	
	printf("������������");
	scanf("%s",book.title);
	printf("���������ߣ�");
	scanf("%s",book.author);
	printf("�������ۼۣ�"); 
	scanf("%f",&book.price);
	printf("������������ڣ�"); 
	scanf("%d",&book.date);
	printf("����������磺"); 
	scanf("%s",&book.publisher);
	
	printf("\n=====����¼�����======\n");
	
	printf("������%s\n",book.title);
	printf("���ߣ�%s\n",book.author);
	printf("�ۼۣ�%2f\n",book.price);
	printf("�������ڣ�%d\n",book.date);
	printf("�����磺%s\n",book.publisher);
	
	//��ʼ�� �ṹ��
	struct Book book = {
		.title = "����ѧc�����"�� 
	}; 
	
	
	return 0;
}
