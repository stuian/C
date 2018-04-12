#include <stdio.h>

int main()
{
        // 凯撒加密程序 ;难度在于最后几个字母经过偏移后要变成开头的字母 
        
		int ch;

        printf("请输入明文：");

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
