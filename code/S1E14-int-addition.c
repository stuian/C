#include <stdio.h>

int main()
{
        int num = 0;
        long sum = 0L; // 0L表示类型为long的0
        int status;

        do
        {
                printf("请输入合法的数字：");
                sum = sum + num;
                status = scanf("%d", &num);
        } while(status == 1); //scanf会返回接受字符的个数 

        printf("结果是：%ld\n", sum);

        return 0;
}
