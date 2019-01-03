# include <stdio.h>
//输出这个数 

int main()
{	
	char ch;
	int sum = 0,num,i,count=0;
	char s[1024];
	
	while((ch = getchar()) != '\n'){

//		错误点：sum += (int)ch;//0作为字符转换成int类型是ascii码的值 

		num = ch - '0';
		sum += num;
	}
//	printf("%d",sum);
	
	//从高到低输出一个数;将整数转换化成字符串一个个输出 
	
	// 数字转字符串
	sprintf(s,"%d",sum);
	 
	// 字符串转数字
	//  sscanf(str, "%d", &rsl);
	
	for(i=0;s[i] != '\0';i++){
		count++;
	}
	
	for(i=0;i < count;i++){
		switch(s[i]){ //表达式 
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
