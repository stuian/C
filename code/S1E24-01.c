# include <stdio.h>
# include <math.h>
# define MAXSIZE 1024

//int main() 
//{
//	char ch;
//	char data[MAXSIZE];
//	int count = 0;
//	int i,j,result;
//	
//	while((ch = getchar()) != '\n'){
//		data[count] = ch; 
//		count++;
//	}
//	
//	result = sqrt(count);
//	count = 0;
//	
//	for(i = 0;i < result;i++){
//		for(j = 0;j < result;j++){
//			printf("%c ",data[count]);
//			count++;
//		}
//		printf("\n");
//	}
//	
//	
//	return 0;
//}

int main(){
	int length,aver;
	int i,j;
	char str[MAXSIZE];
	
	scanf("%s",str);
	
	length = strlen(str);
	aver = sqrt(length);
	
	for(i = 0;i<aver;i++){
		for(j = 0;i<aver;j++){
			printf("%c ",str[i*aver + j]);
		}
		printf("\n");
	}
	
	return 0;
}

