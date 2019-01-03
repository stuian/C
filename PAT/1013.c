# include <stdio.h>
# include <math.h>

int prime(int i){
	int j,mid;
	mid = sqrt(i);
	for(j=2;j<=mid;j++){
		if(i%j==0){
			return 0;
		}
	}
	return 1;
}

int main(){
	//用一个数组存起来
	
	int s[10001];
	int i=4,count=2;
	int m,n;

	if(scanf("%d %d",&m,&n)){};
	
	s[1] = 2;s[2] = 3;

	if(n>2){
		while(count<n){
			if(prime(i)){
				s[++count] = i;
			}
			i++;	
		}
	}
	
	count = 1;
	for(i=m;i<=n;i++){
		if(m==n){
			printf("%d",s[n]);
			break;
		}
		else{
			if(count % 10 != 0 && count!=(n-m+1)){
				printf("%d ",s[i]);
				count++;
			}
			else if(count % 10 == 0){
				printf("%d\n",s[i]);
				count++;
			}
			else{
				printf("%d",s[i]);
			}
		}
		
	}
	

	return 0;
}
