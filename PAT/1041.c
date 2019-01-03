# include <stdio.h>

struct information{
	char s[14];
	int test;
}info[1000];

int main(){
	
	int n,i,j,c,t,count;
	char num[14];
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %d %d",num,&c,&t);
		for(j=0;j<14;j++){
			info[c].s[j] = num[j];
		}
		info[c].test = t;
	}
	
	scanf("%d",&count);
	for(i=0;i<count;i++){
		scanf("%d",&c);
		printf("%s %d\n",info[c].s,info[c].test);
	}
	
	return 0;
}
