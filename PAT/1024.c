# include <stdio.h>
# include <string.h>
# include <math.h>

int main(){
	
	//���ģ�ȥ�����ã����ú�E֮�������1.23400;E���棺10*0+1*3
	
	char s[10000];
	char *p,flag;
	int len,sqt=0;
	int i,j=0;
	
	if(scanf("%s",s)){};
	
	len = strlen(s);

	p = strchr(s,'E');
//		printf("%c",*p);
	flag = *(p+1);//'-'
//		printf("%c",flag);
	for(i=len-1;s[i]!=flag;i--){
		sqt += (s[i]-'0')*(pow(10,j));
		j++;
	}
//		printf("%d",sqt);//�õ�Ӧ����ӵ�0�ĸ��� 
	if(s[0]=='-'){
		printf("-");
	}
	if(flag=='-'){
		printf("0.");
		for(i=0;i<sqt-1;i++){
			printf("0");
		}
		for(i=1;s[i]!='E';i++){
			if(s[i]!='.'){
				printf("%c",s[i]);
			}
		}
	}
	else{
		for(i=1;s[i]!='E';i++){
			if(s[i]!='.'){
				printf("%c",s[i]);
			}
			if(s[i]=='.'){
				j = i+1;
			}
		}
//		printf("\n%d%d\n",j,i);
//		printf("\n%d\n",sqt-i+j);
		len = sqt-i+j;
		for(i=0;i<len;i++){
			printf("0");
		}
	}

	
	return 0;
}
