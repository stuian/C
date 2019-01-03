# include <stdio.h>
# include <stdlib.h>

int cmp(const void *a_,const void *b_){
	int *a = (int *)a_,*b = (int *)b_;
	return *a - *b;
}

int main(){
	int s[100000];
	int i,j,n,p,temp,max=0;
	
	if(scanf("%d %d",&n,&p)){};
	
	for(i=0;i<n;i++){
		scanf("%d",&s[i]);
	}
	
	qsort(s,n,sizeof(s[0]),cmp); //从小到大 
	
	for(i=0;i<n;i++){
		temp = -1;
		for(j=i;j<n;j++){
			//m = s[i];M = s[j]
			if(s[j]<=s[i]*p && j>temp){
				temp = j;
			}
		}
		if(temp>=0 && (temp-i+1)>max){
			max = temp-i+1;
		}
	}
	
	printf("%d",max);
	
//	for(i=0;i<n;i++){
//		printf("%d",s[i]);
//	}
	
	return 0;
}
