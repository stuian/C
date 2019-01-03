# include <stdio.h>
# include <stdlib.h>

//typedef struct node *Node;

struct node{ //结构体名，相当于int 
	int addr;
	int data;
	int next;
}node,*Node;//全局变量 

//struct node *Node;//定义一个结构体指针变量 

/*struct Book{
	char name[10];
	char bookname[20];
};

struct Book getInput(struct Book book){//传入的是整个结构体变量 
};//函数声明 

//为了提高效率，我们一般不传入整个结构体，而是传入指向结构体的指针
//同样返回值也是一个地址，当然因为我们用的是指针对其修改，不需要返回值 
void getInput(struct Book *book);

这样一来就变成了动态分配空间了

malloc的输出是一个void*的指针，可以将它转换成任何类型 

*/ 

//void swap(a,b){//传入的是地址 
//	Node temp;//交换的是地址里的数据 
//	temp = *a;
//	*a = *b;
//	*b = *temp;
//}

int main(){
	struct Node *temp;
	return 0;
}
