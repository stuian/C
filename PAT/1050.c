# include <stdio.h>
# include <stdlib.h>

int comp(const void*a,const void*b){
	return *(int *)b - *(int *)a;
}

int main(){
	//分步
	int n,i,num[100000];
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	
	//首先从大到小排序 
	qsort(num,n,sizeof(num[0]),comp);
	
//	for(i=0;i<n;i++){
//		printf("%d",num[i]);
//	}

	//分解成小问题，逐个解决
	 
	
	return 0;
}
