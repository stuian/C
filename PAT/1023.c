# include <stdio.h>

int main(){
	int i,j,num;
	int s[10];
	
	//循环太多？超时了 
	//先输出一个非0且最小的数，然后按顺序输出就好 
	
	for(i=0;i<10;i++){
		if(scanf("%d",&num)){};
		s[i] = num;
	}
	
	for(i=1;i<10;i++) {
		if(s[i]>0){
			printf("%d",i);
			s[i]--;
			break;
		}
	}
	
	
	for(i=0;i<10;i++){
		for(j=0;j<s[i];j++){
			printf("%d",i);
		}
	}
	
	return 0;
}
