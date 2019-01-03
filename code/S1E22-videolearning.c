# include <stdio.h>

//指针和数组
//数组名其实是数组的第一个元素的地址,每个元素的地址间隔一个元素所有空间的大小
//指向数组的指针——指针指向数组的第一个元素就可以了 ——同时还可用数组的下标法访问指针指向的数组 
//指针运算——*（p+1）  

int main()
{
//	int a;
//	int *p = &a;
//	
//	printf("请输入一个整数:");
//	scanf("%d",&a);
//	printf("a = %d\n",a);
//	
//	printf("请重新输入一个整数:");
//	scanf("%d",p);
//	printf("a = %d\n",a);
	
//	char str[123];
//	
//	printf("str的第一个元素的地址是%p\n",str);
//	printf("str的第一个元素的地址是%p\n",&str[0]);

//	char *str = "I love FishC.com!" ; //字符指针变量，初始化为一个字符串 
//	int i,length;
//	
//	length = strlen(str);
//	
//	for(i = 0;i < length;i++)
//	{
//		printf("%c",str[i]);
//	}
//	printf("\n");
	
	
	int *str[3] = {1,2,3};
	
	printf("str[0] = %d,str[1] = %d,str[2] = %d\n",*str,*(str+1),*(str+2));
	
	printf("str[0] = %d,str[1] = %d,str[2] = %d\n",str[0],str[1],str[2]);
	
	return 0;
}

//课后作业
// 
