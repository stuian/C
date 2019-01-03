# include <stdio.h>
# include <string.h>

int main(){
	char s[5];
	int i,length,temp;
	
//	gets(s); //fgets会接受换行符，并以一个'\0'字符结束符 
	//gets会把接收到的换行符改成\0;欲哭无泪，gets已经被弃用了 
	
	fgets(s,5,stdin);
	
	length = strlen(s)-1; //strlen是不检查'\0'的 
	
	for(i=0;i<length;i++){
		printf("%c",s[i]);
	}
	
	printf("\n");
	
	printf("length:%d\n",length);
	//n<1000
	
	//求出该数字的个，十，百位数字
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
