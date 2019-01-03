# include <stdio.h>

int main()
{
	// 是否符合尼科彻斯定理;O(N2);因为是有连续的奇数的和构成，但是不确定其实奇数是什么，只能一个一个试 
	int i,j,n,cubed,sum = 0;
	
	printf("请输入一个整数：");
	scanf("%d,&n");
	                                   
	cubed = n * n * n;
	
	for(i = 1;i < cubed;i += 2)
	{
		for(j = i;j < cubed;j += 2) //注意j=i 
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
