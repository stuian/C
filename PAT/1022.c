# include <stdio.h>

int main(){
	
	//2��32�η�-1��ʾ�޷���������ʾ�����Χ
	//���ƻ��� 
	//2��63�η�-1 
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
