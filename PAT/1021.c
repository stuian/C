#include <stdio.h>
#include <string.h>

int main(){
	//个位数字最多有10种：0，1，2，。。。9
	int num[10] = {0};
	char s[1000];
	int i,len,temp;
	
	if(scanf("%s",s)){};
	
	len = strlen(s);
	
	for(i=0;i<len;i++){
		temp = s[i] - '0';
		num[temp]++;
	}
	
	for(i=0;i<10;i++){
		if(num[i]>0){
			printf("%d:%d\n",i,num[i]);
		}
	}
	
	return 0;
}
