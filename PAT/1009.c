# include <stdio.h>
# include <string.h>

int main(){
	//µ¹ÐòÊä³ö 
	char s[82];
	int temp;
	int i,j,length;
	
	if(fgets(s,82,stdin)){};
	
	length = strlen(s) - 1;
	j=length;
	
	for(i=length-1;i>=0;i--){
		if(s[i] == ' '){
			for(temp=i+1;temp<j;temp++)
			{
				printf("%c",s[temp]);
			}
			printf(" ");
			j = i;
		}
		if(i == 0){
			for(temp=0;temp<j;temp++){
				printf("%c",s[temp]);
			}
		}
	}
	
	return 0;
}
