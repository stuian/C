# include <stdio.h>
int main()
{
	int a = 0,e = 0,i = 0,o = 0,u = 0;
	char ch;
	
	printf("������һ��Ӣ�ľ��ӣ�");
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
	
	printf("������ľ����У�����Ԫ����ĸ%d\n",a+e+i+o+u);
	printf("���У�a(%d),e(%d),i(%d),o(%d),u(%d)",a,e,i,o,u);
}
