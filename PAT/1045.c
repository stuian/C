# include <stdio.h>

//暴力法肯定会超时；
//参考方法：1、比较i左边的最大值（建立最大值数组）
//2、右边的最小值 

int main(){
	int n,i,temp,num[100001],result[100000],max=-1;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&temp);
		num[i] = temp>max?temp:max;
	}
	
	
	return 0;
}
