#include <stdio.h>
#include <math.h> 

int prime(int n){
	int mid,i;
	if(n == 1 || n == 2 || n == 3)
	{
		return 1;
	}
	else{
		mid = sqrt(n);
		for(i=2;i<=mid;i++) {
			if(n % i == 0){
				return 0;
			}
		}
		return 1;
	}
}

int main()
{
	int i,n,flag=1;
	int p=0,q=0;
	int count=0;
	
	if(scanf("%d",&n)){};
	
	//错误点，2也是素数 
	//最后一个测试点超时：找素数的方法不好 
	//修改方法：建立一个素数表 
	
	for(i = 1;i<=n;i++){
		if(prime(i)){
			if(flag==1)
			{
				p = i;
				flag = 2;
			}
			else{
				q = i;
				flag = 1;
			}
			if(flag==1 && q > p){
				if(q - p == 2){
					count++;
//					printf("p:%d,q:%d,count:%d\n",p,q,count);
				}
			}
			if(flag==2 && p > q){
				if(p - q == 2){
					count++;
//					printf("p:%d,q:%d,count:%d\n",p,q,count);
				}
			}
		}
	}
	
	printf("%d",count);
	
	return 0;
}
