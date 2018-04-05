# include <stdio.h>
int main()
{
	int a = 0,e = 0,i = 0,o = 0,u = 0;
	char ch;
	
	printf("请输入一个英文句子：");
	while ((ch = getchar()) != '\n')
        {
                switch (ch)
                {
                        case 'a':
                        case 'A': a++;
                                  break;
                        case 'e':
                        case 'E': e++;
                                  break;
                        case 'i':
                        case 'I': i++;
                                  break;
                        case 'o':
                        case 'O': o++;
                                  break;
                        case 'u':
                        case 'U': u++;
                                  break;
                }
        }
	
	printf("您输入的句子中，包含元音字母%d\n",a+e+i+o+u);
	printf("其中：a(%d),e(%d),i(%d),o(%d),u(%d)",a,e,i,o,u);
}
