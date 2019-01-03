# include <stdio.h>
# include <stdlib.h>
#define SWAPNODE(A,B){Node temp = A;A = B;B = temp;}//交换地址 

typedef struct node *Node;

struct node{
	int addr;
	int data;
	int next;
};

//void swap(Node *a,Node *b){//传入的是地址;涉及到形参和实参的问题 
//	Node temp;//交换的是地址里的数据 
//	temp = *a;
//	*a = *b;
//	*b = *temp;
//}

int main(){
	int a,n,k;
	Node *nodes,*p;
	int i,j;
	
	if(scanf("%d %d %d",&a,&n,&k)){};
	nodes = (Node*)malloc(n * sizeof(Node));//申请n个结构体大小的空间 
	//就是一个数组 ;是一整块空间 
	
	for(i = 0;i<n;i++){
		nodes[i] = (Node)malloc(sizeof(struct node));//为什么还要申请 
		scanf("%d %d %d",&nodes[i]->addr,&nodes[i]->data,&nodes[i]->next);
	}
	
	//将结点按顺序串起来 
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(nodes[j]->addr == (i ? nodes[i-1]->next : a)){
				SWAPNODE(nodes[i], nodes[j]);
				break;
			}
		}
		if(nodes[i]->next == -1){
			n = i + 1;
		}
	}
	
	for(i = 0;i < n/k;i++){
		p = nodes + i * k;
		for(j = 0;j < k/2;j++){
			SWAPNODE(p[j], p[k - j - 1]);
		}
	}
	
	for(i = 0;i<n-1;i++){
		printf("%05d %d %05d\n",nodes[i]->addr,nodes[i]->data,nodes[i+1]->addr);
	}
	
	printf("%0.5d %d -1\n", nodes[n - 1]->addr, nodes[n - 1]->data);
	return 0;
}
