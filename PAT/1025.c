# include <stdio.h>
# include <stdlib.h>
#define SWAPNODE(A,B){Node temp = A;A = B;B = temp;}//������ַ 

typedef struct node *Node;

struct node{
	int addr;
	int data;
	int next;
};

//void swap(Node *a,Node *b){//������ǵ�ַ;�漰���βκ�ʵ�ε����� 
//	Node temp;//�������ǵ�ַ������� 
//	temp = *a;
//	*a = *b;
//	*b = *temp;
//}

int main(){
	int a,n,k;
	Node *nodes,*p;
	int i,j;
	
	if(scanf("%d %d %d",&a,&n,&k)){};
	nodes = (Node*)malloc(n * sizeof(Node));//����n���ṹ���С�Ŀռ� 
	//����һ������ ;��һ����ռ� 
	
	for(i = 0;i<n;i++){
		nodes[i] = (Node)malloc(sizeof(struct node));//Ϊʲô��Ҫ���� 
		scanf("%d %d %d",&nodes[i]->addr,&nodes[i]->data,&nodes[i]->next);
	}
	
	//����㰴˳������ 
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
