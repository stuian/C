# include <stdio.h>

int main() 
{
	
	
	return 0;
}

//array[x][y][z] = *(*(*(array+x)+y)+z);
//o;o;x;x
//*(matrix + 1) + 2 = &matrix[1][2] 
//(node *)->强制类型转换
//如果要用指针来指向二维数组，必须要使用数组指针
//将一维数组转换二维数组并用指针指向它
//int (*p)[3] = (int (*)[3])&array; 
