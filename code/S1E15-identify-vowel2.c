# include <stdio.h>
int main()
{
	int total = 0;
	int a,e,i,o,u;
	int status;
	char input,ch;
	
	printf("������һ��Ӣ�ľ��ӣ�");
	do
	{
		status = scanf("%c",&input);
		if((int)input == 65 || (int)input == 97)
		{
			total += 1;
			a += 1;
		}
		else if((int)input == 69 || (int)input == 101)
		{
			total += 1;
			e += 1;
		}
		else if((int)input == 73 || (int)input == 105)
		{
			total += 1;
			i += 1;
		}
		else if((int)input == 79 || (int)input == 111)
		{
			total += 1;
			o += 1;
		}
		else if((int)input == 85 || (int)input == 117)
		{
			total += 1;
			u += 1;
		}
		
		
	}while(ch = getchar() != '\n' &&  status == 1);
	
	printf("������ľ����У�����Ԫ����ĸ%d\n",total);
	printf("���У�a(%d),e(%d),i(%d),o(%d),u(%d)",a,e,i,o,u);
}
