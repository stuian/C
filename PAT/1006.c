# include <stdio.h>
# include <string.h>

int main(){
	char s[5];
	int i,length,temp;
	
//	gets(s); //fgets����ܻ��з�������һ��'\0'�ַ������� 
	//gets��ѽ��յ��Ļ��з��ĳ�\0;�������ᣬgets�Ѿ��������� 
	
	fgets(s,5,stdin);
	
	length = strlen(s)-1; //strlen�ǲ����'\0'�� 
	
	for(i=0;i<length;i++){
		printf("%c",s[i]);
	}
	
	printf("\n");
	
	printf("length:%d\n",length);
	//n<1000
	
	//��������ֵĸ���ʮ����λ����
	if(length==3){
		for(i=1;i<=s[0] - '0';i++){
			printf("B");
		}
		for(i=1;i<=s[1] - '0';i++){
			printf("S");
		}
//		printf("%s",(int)s[0] * 'B');
//		printf("%s",(int)s[1] * 'S');
		for(i=1;i<=s[2] - '0';i++){
			printf("%d",i);
		}
	}
	
	if(length==2){
		for(i=1;i<=s[0] - '0';i++){
			printf("S");
		}
		for(i=1;i<=s[1] - '0';i++){
			printf("%d",i);
		}
	}
	
	if(length==1){
		for(i=1;i<=s[0] - '0';i++){
			printf("%d",i);
		}
	}
	
	return 0;
}
