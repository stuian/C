# include <stdio.h>
//对任何一个正整数 n，如果它是偶数，那么把它砍掉一半；
//如果它是奇数，那么把 (3n+1) 砍掉一半。

int main()
{	
	int n,count = 0;
	
	scanf("%d",&n);//最好用getchar() 
	
	while(n != 1){
		if(n % 2 == 0){
			n = n / 2;
		}
		else{
			n = (3*n + 1) / 2;
		}
		count++;
		
	}
	
	printf("%d",count);
	
	return 0;
}
