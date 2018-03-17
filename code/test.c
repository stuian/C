#include <stdio.h>

int main()
{
        int i;

        printf("请输入成绩：");
        scanf("%d", &i);

        switch (i)
        {
                case i >= 90: printf("A\n"); break;
                case i >= 80 && i < 90: printf("B\n"); break;
                case i >= 70 && i < 80: printf("C\n"); break;
                case i >= 60 && i < 70: printf("D\n"); break;
                case i < 60: printf("E\n"); break;
                default: printf("请输入合法的数字！\n"); break;
        }

        return 0;
}
