# include <stdio.h>
int main()
{
	// ��ӡ�žų˷���
	int i,j;int count;
	for (i = 1;i < 10;i++) 
	{
		for (j = 1;j <= i;j++)
		{
			count = i * j;
			printf("%d*%d = %d\n",i,j,count);
		}
	}
}
