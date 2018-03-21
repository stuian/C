#include <stdio.h>

int main()
{
        int i,cost;
        
        printf("公斤 -- 花费（元）：\n");
		
		for(i=1;i<=20;i++)
        {
        	cost = 23 + (i-1)*14;
        	printf(" %3d -- %3d\n",i,cost) ;
		}

        return 0;
}
