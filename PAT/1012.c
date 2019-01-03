# include <stdio.h>

int main(){
	
	int num,n;
	int i,temp=1,count=0,flag=0;
	int a1=0,a2=0,a3=0,a5=0;
	float a4=0;
	
	if(scanf("%d",&num)){};
	
	for(i=0;i<num;i++){
		if(scanf("%d",&n)){};
		
		//a1
		if(n%5==0 && n%2==0){
			a1+=n;
		} 
		
		//a2;错误点：a2可能交错相加后等于0 
		if(n%5==1){
			flag++;
			a2 = a2 + n*temp;
			temp= temp * (-1);
		}
		
		//a3
		if(n%5==2){
			a3++;
		}
		
		//a4
		if(n%5==3){
			count++;
			a4+=n;
		}
		
		//a5
		if(n%5==4 && n>a5){
			a5 = n;
		}
	}
	
	if(count>0){
		a4 = a4 / count;
	}
	
	if(a1){
		printf("%d ",a1);
	}
	else{
		printf("N ");
	}
	if(flag>0){
		printf("%d ",a2);
	}
	else{
		printf("N ");
	}
	if(a3){
		printf("%d ",a3);
	}
	else{
		printf("N ");
	}
	if(a4){
		printf("%0.1f ",a4);
	}
	else{
		printf("N ");
	}
	if(a5){
		printf("%d",a5);
	}
	else{
		printf("N");
	}
	
	return 0;
	
}
