# include <stdio.h>

// S1E21-ָ�� 
// 0. 

int main()
{
	char a = 'F' ;
	int f = 123;
	
	char *pa = &a; //ָ������洢����ָ�뼴��ַ����ַ��ŵ�ֵ��ָ��ָ��ı�����ֵ����ӷ��ʣ� 
	int *pb = &f;
	
	printf("a = %c\n",*pa);
	printf("f = %d\n",*pb);
	
	*pa = 'C'; //ȡֵ 
	*pb += 1;
	
	printf("now a = %c\n",*pa);
	printf("now f = %d\n",*pb);
	
	printf("sizeof pa = %d\n",sizeof(pa)); //8���ֽ� 
	printf("sizeof pb = %d\n",sizeof(pb));
	
	printf("addr of a is %p\n",pa);
	printf("addr of pa is %p\n",&pa);
	
	return 0;
}

//�κ�ϰ��
//0����ַ
//1.ָ�����ֻ�ܴ�ŵ�ַ 
//2. һ��ָ�����
//8.��ֵ����ֵ��&ֻ����������ֵ����λ�洢λ�ã���������һ����ֵ�������á�&23��
// 
