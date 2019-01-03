# include <stdio.h>
# include <stdlib.h>

//错误点1：在对浮点或者double型比大小的时候一定要用三目运算符，因为如果也使用整型那样的想减的话，如果是两个很接近的数则可能返回一个小数（大于-1，小于1），而cmp的返回值是int型，因此会将这个小数返回0，系统认为是相等，失去了本来存在的大小关系。 
//错误点2：最大需求量可能大于库存量，所以应设置为sales<=d 

int cmp(const void * a1,const void * b1){
	float * a = (float *)a1;float * b = (float *)b1;
	return (b[1] / b[0]) > (a[1] / a[0]);
}

int main(){
	float market[1000][2];//库存量和总售价->单价 
	int n,d;
	int i;
	float stock,profit,revenue=0,sales=0;
	
	scanf("%d %d",&n,&d);//月饼种数;市场需求量 
	
	for(i=0;i<n;i++){
		scanf("%f",&stock);
		market[i][0] = stock;
	}
	
	for(i=0;i<n;i++){
		scanf("%f",&profit);
		market[i][1] = profit;
	}
	
	qsort(&market[0],n,sizeof(market[0]),cmp);
	
//	for(i=0;i<n;i++){
//		printf("stock %d:%0.2f;profit %d:%0.2f\n",i,market[i][0],i,market[i][1]);
//	}
	
	//计算最大收益 
	for(i=0;sales <= d;i++){
		sales += market[i][0];
		if(sales<=d){
			revenue += market[i][1];
		}
		else{
			sales = sales-market[i][0] ;
			revenue += (d - sales) * (market[i][1] / market[i][0]);
			sales = d;
		}
//		printf("%0.2f",revenue);
	}
	
	printf("%0.2f",revenue);
	
	return 0;
}
