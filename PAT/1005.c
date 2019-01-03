# include <stdio.h>
# include <stdlib.h>

//降序排列 
int comp(const void *a,const void *b){
	return *(int *)b - *(int *)a;
}

int main()
{
	int num,n;
	int i,j,count = 0,temp = 0;
	int s[10000]={0},c[100];
	
	//1 <= num < 100
	if(scanf("%d",&num)){};
	
	//1< n <= 100
	for(i=0;i<num;i++){
		if(scanf("%d",&n)){};
		
		c[count++] = n;
		
		while(n != 1){
			if(n % 2 == 0){
				n = n / 2;
				if(s[n] == 0){
					s[n] = 1;
				}
			}
			else{
				n = (3*n + 1) / 2;
				if(s[n] == 0){
					s[n] = 1;
				}
			}
		}
		
	}
//	
//	//把数组c从大到小排序;快速排序 
	qsort(c,100,sizeof(c[0]),comp);
	 

	
	for(j=0;j<count;j++){
		if(s[c[j]] == 0){
			c[temp++] = c[j];
//			printf("%d ",c[j]);//最后一个打印的数字没有空格 
		}
	}
	for(j=0;j<temp;j++){
		if(j!=temp-1){
			printf("%d ",c[j]);
		}
		else{
			printf("%d",c[j]);
		}
	}
	
	return 0;
}
