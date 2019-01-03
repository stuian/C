# include <stdio.h>

int main(){
	int n,i,j;
	float s[100000],sum=0;
	//这个题按传统想法做肯定又会超时
	//怎样节省重复的计算 
	//4(0 3 2 1) 3(0 0 2 1) 2(0 0 0 1) 1(0 0 0 0) 
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%f",&s[i]);
	}
	//n*s[0]
	
	for(i=n;i>=1;i--){
		sum+= i*s[n-i];
		for(j=1;j<=i-1;j++){
			sum += s[n-j]*j;
		}
	}
	
	printf("%0.2f",sum);
	
	return 0;
}
