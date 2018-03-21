#include <stdio.h>

int main()
{
    
    char ch;
    
    printf("ÇëÊäÈë£º");
    
    while ((ch = getchar()) != '\n')
    {
    	if ((int)ch >=65 && (int)ch <=90)
    	{
    		ch = (int)ch + 32;
			
		}
			
		else if ((int)ch >=97 && (int)ch <=122)
		{
			ch = (int)ch - 32;
			
		}
		putchar(ch);
	}
    	
		
	return 0;
}
