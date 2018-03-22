# include <stdio.h>
int main()
{
	// ¥Ú”°æ≈æ≈≥À∑®±Ì
	int i,j,k;int count;
	
	for (i = 1;i <= 9 ;i++)
	{
		for (k = 1;k <= 9-i;k++)
		{
			printf("        ");
		}
		for(j = 1;j <= i;j++)
		{
			count = i * j;
			printf("%d*%d = %-2d",i,j,count);
		}
			
		putchar('\n');	
	}
	
	
}
