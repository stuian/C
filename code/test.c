#include <stdio.h>

int main()
{
 	int status ;
 	int sum = 0;
 	int num = 0;
	printf("������Ϸ������֣�");
    do
    {
        status = scanf("%d", &num);
        printf("%d\n",num);
        sum = sum + num;
        printf("%d\n",sum);
    } while (getchar() != '\n' && status == 1);
    printf("%d\n",sum);


    return 0;
}
