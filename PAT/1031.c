# include <stdio.h>

int isvalid(char s[]){
	int j;
	for(j=0;j<17;j++){
		if(s[j]<'0' || s[j]>'9'){
			return 1;
		}
	}
}

int main(){
	int i,j,n,sum=0,count=0;
	int num[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char s[18];
	char z[11]={'1','0','X','9','8','7','6','5','4','3','2'};
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",s);

		//判断17位是否合法
		if(isvalid(s) == 1){
			for(j=0;j<18;j++){
				printf("%c",s[j]);
			}
			printf("\n");
			count++;
			continue;
		}
		
		//数字合法，接下来判断校验码 
		for(j=0;j<17;j++){
			sum += (s[j] - '0') * num[j];
		}
		//求模
		sum = sum - (sum / 11) * 11;
//		printf("z=%d;z[sum]=%c\n",sum,z[sum]);
		//对应z值与m 
		if(z[sum] != s[17]){
			for(j=0;j<18;j++){
				printf("%c",s[j]);
			}
			printf("\n");
			count++;
		}
	}
	if(count==0){
		printf("All passed"); 
	} 
	
	return 0;
}
