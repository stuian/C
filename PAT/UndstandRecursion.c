# include <stdio.h>

int reverse(int s[],int i){
	if(s[i]>0){
		reverse(s,i+1);
		printf("%d",s[i]); //5 4 3 2 1;当条件不成立时，它会回溯到上一层执行循环体之后的语句 
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
