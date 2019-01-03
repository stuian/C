# include <stdio.h>
# include <string.h>

//ctype.h;toupper();isupper;

//判断是不是坏掉的键
int broken(char s[],int len,char c){
	int i;
	for(i=0;i<len;i++){
		if((c>='a' && c<='z') || (c>='A' && c<='Z')){
			if(c==s[i]+'a'-'A' || c==s[i]-'a'+'A'){
				return 1;
			}
		}
		else{
			if(c==s[i]){
				return 1;
			}
		}
	}
	return 0;
}

int main(){
	char s1[70],s2[100000],ch;
	int i=0,count=0,len1,len2;
	
	while((ch = getchar()) != '\n')
	{
		s1[i++] = ch;
	}
	scanf("%s",s2);
	
	if(s1[0]==' '){
		len1 = 0;
	}
	else{
		len1 = strlen(s1);
	}
	len2 = strlen(s2);
	
//	printf("%d %d",len1,len2);

	if(len1==0){
		printf("%s",s2);	
	}
	
	for(i=0;i<len2;i++){
		if(broken(s1,len1,'+') > 0 && s2[i]>='A' && s2[i]<='Z'){
			count++;
			continue;
		}
		if(broken(s1,len1,s2[i])>0){
			count++;
			continue;
		}
		printf("%c",s2[i]);
	}
	
	if(count==len2){
		printf(" ");
	}
	
	return 0;
}
