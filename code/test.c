#include <stdio.h>
# define m 2
# define p 3
# define n 2

int main()
{
	char a[] = "��";//'\0'������ 
	int i,length;
	
	length = sizeof(a) / sizeof(a[0]);
	for(i = 0;i < length;i++){
		printf("a[%d] = %d\n",i,a[i]);
	}

	
//	scanf("%s",a);
//	printf("%s",a);
	
	printf("size of a Chinese word is %d",length);
	
	return 0;
} 
