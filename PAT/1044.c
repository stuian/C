# include <stdio.h>
# include <string.h>
# include <ctype.h>

char *units[] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", 
    "aug", "sep", "oct", "nov", "dec"};
char *tens[] = {"tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", 
    "syy", "lok", "mer", "jou"};

int Mars(char *s){
	int i;
	if(s)
    {
        for(i = 0; i < 13; i++)         /* units digits */
            if(strcmp(s, units[i]) == 0)
                return i;
        for(i = 1; i < 13; i++)         /* tens digits */
            if(strcmp(s, tens[i - 1]) == 0)
                return i * 13;
    }
    return 0;
}

int main(){
	int N,m,i;
	char line[11];
	
	fgets(line,11,stdin);
	sscanf(line,"%d",&N);
	for(i=0;i<N;i++){
		fgets(line,11,stdin);
		if(isdigit(line[0])){
			sscanf(line,"%d",&m);
			if(m/13 && m % 13){
				//两位数对13不整除
				printf("%s %s\n",tens[m/13-1],units[m%13]) ;
			}
			if(m/13 && m % 13 ==0){
				//两位数对13整除
				printf("%s\n",tens[m/13-1]);
			}
			if(m/13==0){
				//个位数
				printf("%s\n",units[m%13]) ;
			}
		}
		if(isalpha(line[0])){
			m = Mars(strtok(line," \n")); //第一个字串 
			m += Mars(strtok(NULL, " \n"));//继续查找 
			printf("%d\n",m);
		}
	}
	
	
	return 0;
}
