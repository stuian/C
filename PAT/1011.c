# include <stdio.h>

int main(){
	
	int i; 
	int num;
	long long a,b,c;
	
	if(scanf("%d",&num)){};
	
	for(i=0;i<num;i++){
		if(scanf("%lld %lld %lld",&a,&b,&c)){};
		if(a+b>c){
			printf("Case #%d: true\n",i+1);
		}
		else{
			printf("Case #%d: false\n",i+1);
		}
	}
	
	return 0;
}
