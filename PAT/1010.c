# include <stdio.h>

int main(){
	
	//如果结果是零就不用输出了
	//如果是零多项式要输出为0 0 
	
	int m,n; 
	
	if(scanf("%d %d",&m,&n)){
		if(n==0){
			printf("0 0");
			return 0;
		}
		else{
			printf("%d %d",m*n,n-1);
		}
	}
	
	//循环输入
	while(scanf("%d %d",&m,&n)!=EOF){
		if(n==0){
			return 0;
		}
		else{
			printf(" %d %d",m*n,n-1);
		}	
	} 
	
	return 0;
}
