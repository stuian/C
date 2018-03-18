# include <stdio.h> 
int main() 
{
	char ch[6]= "FishC";
	int i;
	
	printf("ÇëÊäÈëÄãÏñ·ÃÎÊµÄ×Ö·ûÐòºÅ0-5:");
	scanf("%d",&i);
	
	if (i>=0 && i<=5)
	{
		printf("%c\n",ch[i]);
	}
	else
	{
		printf("ÇëÊäÈëÕýÈ··¶Î§µÄ×Ö·ûÐòºÅ¡£");
	}
}
