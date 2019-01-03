# include <stdio.h>
# include <string.h>

int exist(char s3[],int count,char c){
	int k;
	for(k=0;k<count;k++){
		if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')){
			if(c==s3[k] || c + ('a'-'A')==s3[k] || c - ('a'-'A') == s3[k]){
				return 0;
			}
		}
		else if(s3[k]==c){
			return 0;
		}	
	}
	return 1;
}

int main(){
	char s1[80],s2[80],s3[80];
	int i=0,j=0,count = 0;
	
	if(scanf("%s",s1)){};
	if(scanf("%s",s2)){};
	
	while(i<strlen(s1)){
		if(s1[i] != s2[j]){
			if(count == 0){
				s3[count++]= s1[i];
			}
			else if(exist(s3,count,s1[i]) > 0){
				s3[count++]= s1[i];
			}
			i++;
		}
		else{
			i++;j++;
		}
		printf("i = %d,j = %d; ",i,j);
		for(i=0;i<count;i++){
			if(s3[i]>='a' && s3[i]<='z'){
				printf("%c",s3[i]+'a'-'A');
			}
			else{
				printf("%c",s3[i]);	
			}
		}
		printf("\n");
	}
	
//	for(i=0;i<count;i++){
//		if(s3[i]>='a' && s3[i]<='z'){
//			printf("%c",s3[i]+'a'-'A');
//		}
//		else{
//			printf("%c",s3[i]);	
//		}
//	}
	
	return 0;
}
