# include <stdio.h>

int main(){
	
	//����������Ͳ��������
	//����������ʽҪ���Ϊ0 0 
	
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
	
	//ѭ������
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
