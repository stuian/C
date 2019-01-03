# include <stdio.h>
# include <string.h>
# include <math.h>

struct number{
	char m[3];
}tteen[13]={"tret","jan","feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};

int main(){
	//13进制 
	//jan, feb, mar, apr, may, jun, jly, aug, sep, oct, nov, dec
	// 1    2    3    4    5    6    7    8    9    10   11   12
	//tam, hel, maa, huh, tou, kes, hei, elo, syy, lok, mer, jou
	//[0, 169)->[0,100)
	
	int n,i,j=0,num=0;
	char s[20],ch;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		while((ch = getchar()) != '\n'){
			if(ch!=' '){
				s[j++]=ch;
			}
		}
		if(s[0]>='0' && s[0]<='9'){//数字转火星文 
			for(j=strlen(s)-1;j>=0;j--){
				num += (s[j] - '0') * pow(10,strlen(s)-1-j);
			}//得到数字,题目限制在两位数 
			if(num/13==0){//个位数 
				printf("%s",tteen[num].m);
			}
		}
	}
	return 0;
}
