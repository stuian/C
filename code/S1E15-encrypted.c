#include <stdio.h>

int main()
{
        // �������ܳ��� ;�Ѷ�������󼸸���ĸ����ƫ�ƺ�Ҫ��ɿ�ͷ����ĸ 
        
		int ch;

        printf("���������ģ�");

        while ((ch = getchar()) != '\n') //0,baby...You know,I love FishC! 
        {
                if (ch >= 'a' && ch <= 'z')
                {
                        putchar('a' + (ch - 'a' + 3) % 26);
                        continue;
                }

                if (ch >= 'A' && ch <= 'Z')
                {
                        putchar('A' + (ch - 'A' + 3) % 26);
                        continue;
                }

                putchar(ch);
        }

        putchar('\n');

        return 0;
}
