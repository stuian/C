#include <stdio.h>

#define M 2
#define N 2
#define P 3

int main()
{
        int a[M][P] = {
                {1, 2, 3},
                {4, 5, 6}};

        int b[P][N] = {
                {1, 4},
                {2, 5},
                {3, 6}};

        int c[M][N] = {0};

        int i, j, k, row;

        for (i = 0; i < M; i++)
        {
                for (j = 0; j < N; j++)
                {
                        for (k = 0; k < P; k++)
                        {
                                c[i][j] += a[i][k] * b[k][j];
                        }
                }
        }

        // row ȡ�������ֵ
        row = M > P ? M : P;

        for (i = 0; i < row; i++)
        {
                // ��ӡA
                printf("|  ");
                for (j = 0; j < P; j++)
                {
                        if (i < M)
                        {
                                printf("\b%d ", a[i][j]); //\b���˸�ɾ������˼ 
                                printf("|");
                        }
                        else
                        {
                                printf("\b\b\b     ");
                        }
                }
                // ��ӡ * ��
                if (i == row / 2)
                {
                        printf(" * ");
                }
                else
                {
                        printf("   ");
                }
                printf("|  ");
                // ��ӡB
                for (j = 0; j < N; j++)
                {
                        if (i < P)
                        {
                                printf("\b%d ", b[i][j]);
                                printf("|");
                        }
                        else
                        {
                                printf("\b\b\b     ");
                        }
                }
                // ��ӡ = ��
                if (i == row / 2)
                {
                        printf(" = ");
                }
                else
                {
                        printf("   ");
                }
                // ��ӡC
                printf("|  ");
                for (j = 0; j < N; j++)
                {
                        if (i < M)
                        {
                                printf("\b%d ", c[i][j]);
                                printf("|");
                        }
                        else
                        {
                                printf("\b\b\b      ");
                        }
                }
                printf("\n");
        }

        return 0;
}
