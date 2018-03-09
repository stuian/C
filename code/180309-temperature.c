#include <stdio.h>
int main()
{
	/* 当f=0,20,...300时，分别打印华氏温度和摄氏温度；f为华氏温度，c为摄氏温度*/
	
	int c,f;
	int low,high;
	low=0;high=300;f=low;
	while (f<=high) {
		c = 5*(f-32)/9;
		printf("华氏温度为%d时，摄氏温度为%d\n",f,c);
		f=f+20;
		
	}
	
}
