# include <stdio.h>

int main(){
	//PATest
	int count=0,s[6]={0};
	char ch;
	
	while((ch = getchar()) != '\n'){
		switch(ch){
			case 'P':
				count++;s[0]++;break;
			case 'A':
				count++;s[1]++;break;
			case 'T':
				count++;s[2]++;break;
			case 'e':
				count++;s[3]++;break;
			case 's':
				count++;s[4]++;break;
			case 't':
				count++;s[5]++;break;
		}
	}
	
	while(count>0){
		if(s[0]>0){
			printf("P");s[0]--;
		}
		if(s[1]>0){
			printf("A");s[1]--;
		}
		if(s[2]>0){
			printf("T");s[2]--;
		}
		if(s[3]>0){
			printf("e");s[3]--;
		}
		if(s[4]>0){
			printf("s");s[4]--;
		}
		if(s[5]>0){
			printf("t");s[5]--;
		}
		count--;
	}
	
	return 0;
}
