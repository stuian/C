# include <stdio.h>

int main()
{
	// �Ƿ������Ƴ�˹����;O(N2);��Ϊ���������������ĺ͹��ɣ����ǲ�ȷ����ʵ������ʲô��ֻ��һ��һ���� 
	int i,j,n,cubed,sum = 0;
	
	printf("������һ��������");
	scanf("%d,&n");
	                                   
	cubed = n * n * n;
	
	for(i = 1;i < cubed;i += 2)
	{
		for(j = i;j < cubed;j += 2) //ע��j=i 
		{
			sum += j; 
			if(sum == cubed)
			{
				if(j - i > 4)
				{
					printf("%d = %d + %d + ... + %d\n",cubed,i,i+2,j);
				}
				else
				{
					printf("%d = %d + %d + %d\n",cubed,i,i+2,i+4);
				}
				goto FINDIT;
			}
			
			if(sum > cubed)
			{
				sum = 0;
				break;
			}
		} 
	}
	 
FINDIT:
	 
	return 0;
}
