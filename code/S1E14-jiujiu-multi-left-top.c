# include <stdio.h>
int main()
{
	// ¥Ú”°æ≈æ≈≥À∑®±Ì
	int i,j;int count;
	for (i = 1;i < 10;i++) 
	{
		for (j = 1;j <= i;j++)
		{
			count = i * j;
			printf("%d*%d = %-2d",i,j,count);
		}
		putchar('\n');
	}
}
