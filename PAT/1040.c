# include <stdio.h>
# include <string.h>

//���󣺳�ʱ 
//��ѧ�� 

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
	//ֻ����� 1000000007 ȡ����:����������� 
	//��λ��TȻ��ֱ������ǰ��ͺ����ж��ٸ�P/T 
	char s[100001];
	int i,len,count=0;
	
	fgets(s,100001,stdin);//���ں����һ�����з� 
	len = strlen(s) - 1;
	
	for(i=0;i<len;i++){
		if(s[i]=='A'){
			count += Count(s,'P',0,i-1) * Count(s,'T',i+1,len-1);
		}
	}
	
	printf("%d",count);
	
	return 0;
}
