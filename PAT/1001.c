# include <stdio.h>
//���κ�һ�������� n���������ż������ô��������һ�룻
//���������������ô�� (3n+1) ����һ�롣

int main()
{	
	int s[1024] = {0};
	int num,n,count = 0,i;
	
	scanf("%d",&num);//�����getchar() 
	
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
