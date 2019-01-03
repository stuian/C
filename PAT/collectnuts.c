#include <stdio.h>
#include <math.h>
#define MAXSIZE 500

typedef struct GNode{
	int row;
	int col;
	int value;
}groups[MAXSIZE]; 

void Sort(groups group,int count){
	//直接插入法 ;前面i-1个元素已经是排好序的了;按递减排序 
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
	 
	while(scanf("%d%d%d",&m,&n,&k) != EOF){ //及该三个值正确接受后执行下面的语句 
		//数据输入 
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
		//group从序号1开始存放结点，包含的结点个数是total个
		
		//排序
		if(total > 1){
			Sort(group,total);
		}
		
		//计算采摘时间不超过k;计算从岸边到每个点，采摘，然后返回的总时间;
		
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
