# include <stdio.h>
//���κ�һ�������� n���������ż������ô��������һ�룻
//���������������ô�� (3n+1) ����һ�롣

int main()
{	
	int n,count = 0;
	
	scanf("%d",&n);//�����getchar() 
	
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
