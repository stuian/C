# include <stdio.h>

int main(){
	int n,i,s[1001]={0},max=0,flag,team,id,score;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d-%d %d",&team,&id,&score);
		s[team]+=score;
	}
	
	for(i=1;i<1001;i++){
		if(s[i]>max){
			max = s[i];
			flag = i;
		}
	}
	printf("%d %d",flag,s[flag]);
	
	return 0;
}
