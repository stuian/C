# include <stdio.h>

// S1E21-指针 
// 0. 

int main()
{
	char a = 'F' ;
	int f = 123;
	
	char *pa = &a; //指针变量存储的是指针即地址，地址存放的值是指针指向的变量的值（间接访问） 
	int *pb = &f;
	
	printf("a = %c\n",*pa);
	printf("f = %d\n",*pb);
	
	*pa = 'C'; //取值 
	*pb += 1;
	
	printf("now a = %c\n",*pa);
	printf("now f = %d\n",*pb);
	
	printf("sizeof pa = %d\n",sizeof(pa)); //8个字节 
	printf("sizeof pb = %d\n",sizeof(pb));
	
	printf("addr of a is %p\n",pa);
	printf("addr of pa is %p\n",&pa);
	
	return 0;
}

//课后习题
//0。地址
//1.指针变量只能存放地址 
//2. 一个指针变量
//8.左值和右值；&只能作用于左值（定位存储位置），常量是一个右值，则不能用‘&23’
// 
