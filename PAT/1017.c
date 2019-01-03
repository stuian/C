# include <stdio.h>
# include <string.h>

int main()
{
	char a[1000]={0},q[1000]={0}; //初始值设为0，这样就有结束符了 
	int i,j=0,b,temp=0,flag=0;
	
	if(scanf("%s %d",a,&b)){};
	
//	printf("%d",strlen(a));//21
	
	for(i = 0;i<strlen(a);i++){ //124 / 3
		if(flag == 0){
			temp = temp*10 + (a[i] - '0');
//				printf("temp:%d",temp); 
			if(temp / b == 0){
				q[j++] = '0';
			}
			if(temp / b > 0){
				flag = 1;
			}
		} //错在商为0时没有加进去 
		if(flag == 1){ 
			q[j++] = (temp / b) + '0'; //12 / 7 = 2;
			//j是q中的数量
//				printf("目前的size是：%d %s\n",strlen(q),q);
			temp = temp % b; //0;1
//				printf("余数为：%d\n",temp);
			flag = 0;
		}
	}
	
	if(q[0]!='0'){
		printf("%d",q[0]-'0');
	}
	else{
		if(q[1]==0){
			printf("0");
		}
	}
	
	//错误：A全为0时，少输出一个0 
	for(i= 1;i<strlen(q);i++){
		printf("%d",q[i]-'0');
	} 
	
	printf(" %d",temp);
	
	return 0;
}
