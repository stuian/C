# include <stdio.h>

int reverse(int s[],int i){
	if(s[i]>0){
		reverse(s,i+1);
		printf("%d",s[i]); //5 4 3 2 1;������������ʱ��������ݵ���һ��ִ��ѭ����֮������ 
	}
	else{
		printf("%d",s[i]);
	} 
}

int main(){
	int s[5] = {1,2,3,4,5,0};
	
	reverse(s,0);
	
	return 0;
}
