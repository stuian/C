#include <stdio.h>

int main()
{
    
    int count;
    
    printf("�����룺");
    
    while (getchar() == '\n')
    	if (((int)getchar())>=65 && ((int)getchar())<=90) 
			count = count + 1;
		else
			;
    
    printf("%d",count);
	return 0;
}
