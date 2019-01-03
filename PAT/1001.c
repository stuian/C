# include <stdio.h>
//对任何一个正整数 n，如果它是偶数，那么把它砍掉一半；
//如果它是奇数，那么把 (3n+1) 砍掉一半。

int main()
{	
	int s[1024] = {0};
	int num,n,count = 0,i;
	
	scanf("%d",&num);//最好用getchar() 
	
	/*
	6
	3
	5 8 4 2 1
	5
	8 4 2 1
	6
	3 5 8 4 2 1
	7
	11 17 26 13 20 10 5 8 4 2 1
	8
	4 2 1
	11
	17 26 13 20 10 5 8 4 2 1
	*/
	
	for(i=0;i<num;i++){
		scanf("%d",&n);
		while(n != 1){
			if(n % 2 == 0){
				n = n / 2;
//				printf("%d ",n);
				if(s[n] == 0){
					s[n] = 1;
				}
			}
			else{
				n = (3*n + 1) / 2;
//				printf("%d ",n);
				if(s[n] == 0){
					s[n] = 1;
				}
			}
			count++;
		}
//		printf("\n");
	}
	
//	printf("%d",count);
	
	return 0;
}
