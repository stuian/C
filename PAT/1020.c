# include <stdio.h>
# include <stdlib.h>

//�����1���ڶԸ������double�ͱȴ�С��ʱ��һ��Ҫ����Ŀ���������Ϊ���Ҳʹ����������������Ļ�������������ܽӽ���������ܷ���һ��С��������-1��С��1������cmp�ķ���ֵ��int�ͣ���˻Ὣ���С������0��ϵͳ��Ϊ����ȣ�ʧȥ�˱������ڵĴ�С��ϵ�� 
//�����2��������������ܴ��ڿ����������Ӧ����Ϊsales<=d 

int cmp(const void * a1,const void * b1){
	float * a = (float *)a1;float * b = (float *)b1;
	return (b[1] / b[0]) > (a[1] / a[0]);
}

int main(){
	float market[1000][2];//����������ۼ�->���� 
	int n,d;
	int i;
	float stock,profit,revenue=0,sales=0;
	
	scanf("%d %d",&n,&d);//�±�����;�г������� 
	
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
	
	//����������� 
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
