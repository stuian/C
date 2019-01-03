# include <stdio.h>

int main(){
	int num,count=0,col,i;
	char c;
	
	scanf("%d %c",&num,&c);
	
	for(i=0;i<num;i++){
		printf("%c",c);
	}
	printf("%c",'\n');//先打印十个a 
	count++;
	
	//求行数;用三目运算 
	if(num%2==0){
		col = num / 2;
	}
	else{
		if(num%2*10/2>=5){//四舍五入 
			col = num / 2 + 1;
		}
		else{
			col = num / 2;
		}
	}
	//理解错了，只要换行就行了 
	while(count!=col-1){
		for(i=0;i<num;i++){
			if(i==0 || i==num-1){
				printf("%c",c);
			}
			else{
				printf(" ");
			}
		}
		printf("%c",'\n');
		count++;
	}

	for(i=0;i<num;i++){
		printf("%c",c);
	}
	
	printf("%c",'\n');
	
	return 0;
}
