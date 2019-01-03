#include <stdio.h>
#include <math.h>
#define MAXSIZE 500

typedef struct GNode{
	int row;
	int col;
	int value;
}groups[MAXSIZE]; 

void Sort(groups group,int count){
	//ֱ�Ӳ��뷨 ;ǰ��i-1��Ԫ���Ѿ����ź������;���ݼ����� 
	int i,j;
	
	for(i = 2;i <= count;i++){
		if(group[i].value > group[i-1].value){
			group[0] = group[i];
			for(j = i-1;group[j].value < group[0].value;j--){
			group[j+1] = group[j];
			}
		}
		
		group[j+1] = group[0]; 
	}
}


int main()
{
	int m,n,k,i,j;
	int x,y;
	
	groups group;
	 
	while(scanf("%d%d%d",&m,&n,&k) != EOF){ //��������ֵ��ȷ���ܺ�ִ���������� 
		//�������� 
		int temp,total = 0,peasum = 0,timesum = 0;
		for(i = 0;i<m;i++){
			for(j=0;j<n;j++){
				scanf("%d",&temp);
				if(temp){
					group[++total].row = i;
					group[++total].col = j;
					group[++total].value = temp;
				}
			}	
		}
		//group�����1��ʼ��Ž�㣬�����Ľ�������total��
		
		//����
		if(total > 1){
			Sort(group,total);
		}
		
		//�����ժʱ�䲻����k;����Ӱ��ߵ�ÿ���㣬��ժ��Ȼ�󷵻ص���ʱ��;
		
		if(total>0){ 
			x = 0;y = group[1].col;
			for(i=1;i <= total;i++){
				timesum = abs(x - group[i].row) + abs(y - group[i].col) + 1;
				if(k >= timesum + group[i].row){
					peasum += group[i].value;
					k -= timesum;
					x = group[i].row;
					y = group[i].col;
				}
				else{
					break;
				}
			}
			
		printf("%d\n",peasum);
		
		}
		
	} 
	
	return 0;
}
