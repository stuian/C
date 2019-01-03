# include <stdio.h>
//指向指针的指针 

int main() 
{
	int num = 1024;int i;
	int *p = &num;
	int **pp = &p; //从它的定义上就可以看出它取值需要结引用的次数。
	//需要两次**才能得到前面的int
	
	char *cbooks[5] = { //指针数组用来存放字符串集合很方便 
		"c专家编程",
		"c专家编程",
		"c专家编程",
		"c专家编程",
		"a带你学c带你飞"};
	
	char **byFishC;
	char **jiayuLoves[4];
	
	byFishC = &cbooks[4];
	jiayuLoves[0] = &cbooks[0];
	jiayuLoves[1] = &cbooks[1];
	jiayuLoves[2] = &cbooks[2];
	jiayuLoves[3] = &cbooks[3];
	
	printf("%p\n",cbooks[4]);
	printf("%c\n",*(cbooks[4]));
	printf("%s\n",cbooks[4]);
	
	char *tabHeader = "Sound";
	printf("%s\n", tabHeader);
	for(i = 0;tabHeader[i] != '\0';i++){
		printf("%c",*(tabHeader+i));
	}
	return 0;
	
	
//	int array[10] = {0,1,2,3,4,5,6,7,8,9}; 
//	int *p = array;
//	//int **p = array;p指针不知道是二维数组，p+1的跨度是一个int 
//	
//	int (*p)[4] = array;
//	
//	int i;
//	
//	for(i = 0;i < 10;i++)
//	{
//		printf("%d\n",*(p+1));
//	}
	
	return 0;
}


