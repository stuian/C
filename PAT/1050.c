# include <stdio.h>
# include <stdlib.h>

int comp(const void*a,const void*b){
	return *(int *)b - *(int *)a;
}

int main(){
	//�ֲ�
	int n,i,num[100000];
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	
	//���ȴӴ�С���� 
	qsort(num,n,sizeof(num[0]),comp);
	
//	for(i=0;i<n;i++){
//		printf("%d",num[i]);
//	}

	//�ֽ��С���⣬������
	 
	
	return 0;
}
