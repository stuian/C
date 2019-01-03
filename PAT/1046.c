# include <stdio.h>

int main(){
	int n,i,a1,a2,b1,b2,counta=0,countb=0;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d %d %d",&a1,&a2,&b1,&b2);
		
		if(a2 == a1+b1 && b2 != a1+b1){
			countb++;
		}
		if(b2 == a1+b1 && a2 != a1+b1){
			counta++;
		}
	}
	printf("%d %d",counta,countb);
	
	return 0;
}
