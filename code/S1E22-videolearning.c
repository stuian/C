# include <stdio.h>

//ָ�������
//��������ʵ������ĵ�һ��Ԫ�صĵ�ַ,ÿ��Ԫ�صĵ�ַ���һ��Ԫ�����пռ�Ĵ�С
//ָ�������ָ�롪��ָ��ָ������ĵ�һ��Ԫ�ؾͿ����� ����ͬʱ������������±귨����ָ��ָ������� 
//ָ�����㡪��*��p+1��  

int main()
{
//	int a;
//	int *p = &a;
//	
//	printf("������һ������:");
//	scanf("%d",&a);
//	printf("a = %d\n",a);
//	
//	printf("����������һ������:");
//	scanf("%d",p);
//	printf("a = %d\n",a);
	
//	char str[123];
//	
//	printf("str�ĵ�һ��Ԫ�صĵ�ַ��%p\n",str);
//	printf("str�ĵ�һ��Ԫ�صĵ�ַ��%p\n",&str[0]);

//	char *str = "I love FishC.com!" ; //�ַ�ָ���������ʼ��Ϊһ���ַ��� 
//	int i,length;
//	
//	length = strlen(str);
//	
//	for(i = 0;i < length;i++)
//	{
//		printf("%c",str[i]);
//	}
//	printf("\n");
	
	
	int *str[3] = {1,2,3};
	
	printf("str[0] = %d,str[1] = %d,str[2] = %d\n",*str,*(str+1),*(str+2));
	
	printf("str[0] = %d,str[1] = %d,str[2] = %d\n",str[0],str[1],str[2]);
	
	return 0;
}

//�κ���ҵ
// 
