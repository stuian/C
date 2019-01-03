# include <stdio.h>

int main(){
	
	//2的32次方-1表示无符号整数表示的最大范围
	//进制换算 
	//2的63次方-1 
	long long int a,b,c; 
	int d;//2-10
	int s[1000];
	int i=0,j;
	
	if(scanf("%lld %lld %d",&a,&b,&d)){};
	
	c = a + b;
	
	while(c / d != 0){ // 10 /2
		s[i++] = c % d; //0
		c = c / d; //5
	}
	s[i] = c;
	
	for(j=i;j>=0;j--){
		printf("%d",s[j]);
	}
	
	return 0;
}
