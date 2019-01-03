# include <stdio.h>

int main() 
{
	int num = 520;
	
	const float pi = 3.14;
	const int *pc = &num;
	//指针指向的值是不可以修改的，但是指针的指向是可以修改的。 
	//该变量只读，不可以修改了 
	
	int * const pi = &num;//常量指针
	//可以修改指针指向的值，但是自身的指向不可以修改了。 
	
	return 0;
}

//通过const 
