# include <stdio.h>
# include <string.h>

int main(){
	//循环右移
	
	int n,m,num;
	int i;
	int s[100];
	
	//错误点：M可能大于等于N 
	
	if(scanf("%d%d",&n,&m)) {};
	
	if(m>n){
		m = m % n; 
	}
	
	for(i=m;i<n;i++){
		if(scanf("%d",&num)) {};
		s[i] = num;
	}
	for(i=0;i<m;i++){
		if(scanf("%d",&num)) {};
		s[i] = num;
	}
	
	for(i=0;i<n;i++){
		if(i!=n-1){
			printf("%d ",s[i]);
		}
		else{
			printf("%d",s[i]);
		}
	}
	
	return 0;
}
