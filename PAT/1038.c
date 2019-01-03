# include <stdio.h>

//超时：用int数组记录每一个成绩即可 

int main(){
	int num,i,n,temp,j;
	int s[100000],c[100000]={0};//耗空间还是耗时间 
	
	scanf("%d",&num);
	for(i=0;i<num;i++){
		scanf("%d",&s[i]);
	}
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&temp);
		for(j=0;j<num;j++){
			if(s[j]==temp){
				c[i] += 1;
			}
		}
	}
	
	for(i=0;i<n;i++){
		printf("%d",c[i]);
		if(i!=n-1){
			printf(" ");
		}
	}
	
	return 0;
}
