#include <stdio.h>

int main()
{
        char name[256];
        float height, weight;

        printf("����������������");
        scanf("%s", name);

        printf("�������������(cm)��");
        scanf("%f", &height);

        printf("��������������(kg)��");
        scanf("%f", &weight);

        printf("========== ����Ϊ��ת�� ==========\n");

        height = height / 2.54; // ����ת��ΪӢ��
        weight = weight / 0.453; // ����ת��Ϊ��

        printf("%s�������%.2f(in)��������%.2f(lb)��\n", name, height, weight);

        return 0;
}
