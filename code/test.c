#include <stdio.h>

int main()
{
 	int status ;
 	int sum = 0;
 	int num = 0;
	printf("请输入合法的数字：");
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
