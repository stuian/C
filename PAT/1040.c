# include <stdio.h>
# include <string.h>

//错误：超时 
//数学题 

int Count(char s[],char c,int i,int j){
	int count = 0;
	for(;i<=j;i++){
		if(s[i]==c){
			count++;
		}
	}
	return count;
}

int main(){
	//只输出对 1000000007 取余数:不超过这个数 
	//定位到T然后分别遍历其前面和后面有多少个P/T 
	char s[100001];
	int i,len,count=0;
	
	fgets(s,100001,stdin);//会在后面加一个换行符 
	len = strlen(s) - 1;
	
	for(i=0;i<len;i++){
		if(s[i]=='A'){
			count += Count(s,'P',0,i-1) * Count(s,'T',i+1,len-1);
		}
	}
	
	printf("%d",count);
	
	return 0;
}
