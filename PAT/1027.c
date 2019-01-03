# include <stdio.h>

int main(){
	
	//特殊:1 
	/*1 3 5
	n=1:*
	n=2:(1+3)*2 - 1
	*/
	
	int i=1,j,sum = 0;
	int n,num,level=1;
	char c;
	
	if(scanf("%d %c",&num,&c)){};
	
	//1、得到沙漏最大的n
	while(sum*2-1<=num)
	{
		sum += i; //1
		i = i+2;  //3
	}
	
	n = i - 4; //最大层点数 5 
	
	//(i + 1) / 2 层数 
	
	//2、打印 + 空格 
	for(i=n;i>=1;i=i-2){ //5 3 1
		for(j=1;j<level;j++){
			printf(" ");
		}
		for(j=0;j<i;j++){
			printf("%c",c);
		}
		level++;
		printf("\n");
	}
	level = (n + 1) / 2;
	if(n > 1){
		for(i=3;i<=n;i=i+2){ //1 3 5
			for(j=level-1;j > 1;j--){
				printf(" ");
			}
			for(j=0;j<i;j++){
				printf("%c",c);
			}
			level--;
			printf("\n");
		}
	}
	
	//3、计算没用掉的点 
	sum = (sum - n - 2) * 2 - 1;
	printf("%d\n",num - sum);
	
	
	return 0;
}
