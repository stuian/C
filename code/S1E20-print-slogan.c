# include <stdio.h>
# include <string.h>

# define NUM 5


int main()
{
	char slogan[NUM][100];
	int i,j,ch,min,max,temp;
	
	for (i = 0;i < NUM;i++)
	{
		printf("������%d�仰��",i+1);
		for (j = 0;(ch = getchar()) != '\n';j++) //getcharÿ���ǽ���һ���ַ�ֱ���յ�\nΪֹ 
		{
			slogan[i][j] = ch;
		}
		slogan[i][j] = '\0';
	}
	
	min = 0;
	max = min;
	
	printf("���������±�%d�仰��\n",NUM) ;
	
	// ��ӡÿ�仰��ͬʱ�Ƚϳ��� 
	for (i = 0;i < NUM; i++)
	{
		printf("%s\n",slogan[i]);
		temp = strlen(slogan[i]);
		min = temp < strlen(slogan[min]) ? i : min;
		max = temp > strlen(slogan[max]) ? i : max;
	}
	
	printf("��������ǣ�%s\n",slogan[max]);
	printf("������̵��ǣ�%s\n",slogan[min]);
	
	
	return 0;
}
