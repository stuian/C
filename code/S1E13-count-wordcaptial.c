#include <stdio.h>

int main()
{
    
    int count;
    char ch;
    
    printf("�����룺");
    
    while ((ch = getchar()) != '\n')
    	if ((int)ch >=65 && (int)ch <=90)
			count = count + 1;
    
    printf("%d",count);
	return 0;
}
