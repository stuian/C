# include <stdio.h>
//�������� 

int main()
{	
	char ch;
	int sum = 0,num,i,count=0;
	char s[1024];
	
	while((ch = getchar()) != '\n'){

//		����㣺sum += (int)ch;//0��Ϊ�ַ�ת����int������ascii���ֵ 

		num = ch - '0';
		sum += num;
	}
//	printf("%d",sum);
	
	//�Ӹߵ������һ����;������ת�������ַ���һ������� 
	
	// ����ת�ַ���
	sprintf(s,"%d",sum);
	 
	// �ַ���ת����
	//  sscanf(str, "%d", &rsl);
	
	for(i=0;s[i] != '\0';i++){
		count++;
	}
	
	for(i=0;i < count;i++){
		switch(s[i]){ //���ʽ 
		case '0':
			printf("ling");break;
		case '1':
			printf("yi");break;
		case '2':
			printf("er");break;	
		case '3':
			printf("san");break;
		case '4':
			printf("si");break;
		case '5':
			printf("wu");break;
		case '6':
			printf("liu");break;
		case '7':
			printf("qi");break;
		case '8':
			printf("ba");break;
		case '9':
			printf("jiu");break;
		}
		
		if(i < count-1){
			printf(" ");
		}
	}

	
//	printf("%s",s);
	
	
	
	return 0;
}
