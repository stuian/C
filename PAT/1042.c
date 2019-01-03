# include <stdio.h>

int main(){
	char ch;
	int s[26]={0},i,max=-1,alp;
	
	while((ch = getchar()) != '\n'){
		if(ch>='A' && ch<='Z'){
			s[ch-'A']++;
		}
		if(ch>='a' && ch<='z'){
			s[ch-'a']++;
		}	
	}
	
	for(i=0;i<26;i++){
		if(s[i]>max){
			max = s[i];
			alp = i;
		}
	}
	
	printf("%c %d",alp+'a',max);
	
//	printf("%d",'z'-97); //a:97->0;A:65->0
	
	return 0;
}
