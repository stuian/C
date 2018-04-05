# include <stdio.h>

int main()
{
	char st,ch;
	int status;

	do
	{
		printf("ÇëÊäÈëÃ÷ÎÄ£º");
		status = scanf("%s",&st);  //0,baby...You know,I love FishC.com!
		if (st >= 'A' && st <= 'Z' || st >= 'a' && st <= 'z')
		{
			st = (int)st + 3;
			putchar((char)st);
		}
		else
		{
			putchar((char)st);
		}
		
	}while((ch = getchar()) != '\n' && status == 1 );

}
