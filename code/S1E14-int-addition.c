#include <stdio.h>

int main()
{
        int num = 0;
        long sum = 0L; // 0L��ʾ����Ϊlong��0
        int status;

        do
        {
                printf("������Ϸ������֣�");
                sum = sum + num;
                status = scanf("%d", &num);
        } while(status == 1); //scanf�᷵�ؽ����ַ��ĸ��� 

        printf("����ǣ�%ld\n", sum);

        return 0;
}
