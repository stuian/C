# include <stdio.h>

# define MAX 1024

//ʵ��str(len) 

int main()
{
	char str[MAX];
	
	printf("������һ���ַ�����");
	
	fgets(str,MAX,stdin);
	
	printf("������������ǣ�%s",str);
	
	return 0;
}
