# include <stdio.h>

int main()
{
	char name[256];
	float height,weight;
	
	
	
	printf("���������������");
	scanf("%s",&name);
	
	printf("�����������ߣ�");
	scanf("%f",&height);
	
	printf("������������أ�");
	scanf("%f",&weight);
	
	printf("========����Ϊ��ת��========") ;
	printf("%c�������%f(in),������%f(lb)��",name,height/2.54,weight/0.4535924);
}
