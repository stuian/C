#include <stdio.h>
#include <stdlib.h>
 
#define SWAPNODE(A, B) {Node temp = A; A = B; B = temp;}
 
typedef struct node *Node;
 
struct node{
    int addr;
    int data;
    int next;
};
 
int main()
{
    int A, N, K;
    Node *nodes, *p;
 
    /* read */
    scanf("%d %d %d", &A, &N, &K);
    nodes = (Node*)malloc(N * sizeof(Node));
    for(int i = 0; i < N; i++) 
    {
        nodes[i] = (Node)malloc(sizeof(struct node));
        scanf("%d %d %d", &nodes[i]->addr, &nodes[i]->data, &nodes[i]->next);
    }
 
    /* link the list */
    for(int i = 0; i < N; i++)
    {
        for(int j = i; j < N; j++)
        {
            if(nodes[j]->addr == (i ? nodes[i - 1]->next : A))
            {
                SWAPNODE(nodes[i], nodes[j]);
                break;
            }
        }
        if(nodes[i]->next == -1)   /* there could be useless nodes */
            N = i + 1;
    }
 
    /* reverse the list */
    for(int i = 0; i < N / K; i++)
    {
        p = nodes + i * K;
        for(int j = 0; j < K / 2; j++)
        {
            SWAPNODE(p[j], p[K - j - 1]);
        }
    }
 
    /* print the list */
    for(int i = 0; i < N - 1; i++)
    {
        printf("%05d %d %05d\n", nodes[i]->addr, nodes[i]->data, nodes[i + 1]->addr);
    }
    printf("%05d %d -1\n", nodes[N - 1]->addr, nodes[N - 1]->data);
 
    return 0;
}
