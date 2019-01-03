# include <stdio.h>

int main(){
//	printf("%d",'z'- 61); //a:97;A:65;32;-55(10-35);-61(36-61)
	
	char i,ch,count=0,plus=0;
	int s[65]={0};
	
	while((ch=getchar())!='\n'){
		if(ch>='0' && ch<='9'){
			s[ch - '0']+=1;
		}
		if(ch>='A' && ch<='Z'){
			s[ch - 55]+=1;
		}
		if(ch>='a' && ch<='z'){
			s[ch - 61]+=1;
		}
	}
	
	while((ch=getchar())!='\n'){
		if(ch>='0' && ch<='9'){
			s[ch - '0']-=1;
		}
		if(ch>='A' && ch<='Z'){
			s[ch - 55]-=1;
		}
		if(ch>='a' && ch<='z'){
			s[ch - 61]-=1;
		}
	}
	
	//有负数
	for(i=0;i<62;i++){
		if(s[i]<0){
			count-=s[i];//缺的珠子 
		}
		else{
			plus+=s[i];
		}
	}
	
	if(count==0){
		printf("Yes %d",plus);
	}
	else{
		printf("No %d",count);
	}
	
	return 0;
}
