# include <stdio.h>
# include <stdlib.h>

int cmp(const void *a1,const void *b1){
	//ǿ������ת����int
	int *a = (int *)a1,*b = (int *)b1;
	if(a[3] != b[3]){
		return a[3] - b[3];//type���� 
	}
	else if((b[1] + b[2]) != (a[1] + a[2])){
		return (b[1] + b[2]) - (a[1] + a[2]);//���� 
	}
	else if(a[1] != b[1]){
		return b[1] - a[1];//���·ֽ��� 
	}
	else{
		return a[0] - b[0];//ѧ������ 
	}
}

int main()
{
	int n,l,h;
	int id,de,cai;
	int stable[100000][4];
	int i,count=0;
	//�����ά�������һЩ 
	
	if(scanf("%d %d %d",&n,&l,&h)){};
	for(i=0;i<n;i++)	{
		if(scanf("%d %d %d",&id,&de,&cai)){};
		//����
		//�ﵽ�����,������Ϣ 
		if(de>=l && cai>=l){
			stable[count][0] = id;
			stable[count][1] = de;
			stable[count][2] = cai;
			//���������ͽ��з���
			if(de>=h && cai>=h){
				stable[count][3] = 1;
			}
			else if(de>=h && cai<h){
				stable[count][3] = 2;
			}
			else if(de<h && cai<h && de>=cai){
				stable[count][3] = 3;
			}
			else{
				stable[count][3] = 4;
			}
			count++;
		} 
	}
	
	qsort(&stable[0],count,sizeof(stable[0]),cmp); //��ÿһ�п���һ������ 
	
	printf("%d\n",count);
	for(i=0;i<count;i++){
		printf("%d %d %d\n",stable[i][0],stable[i][1],stable[i][2]);
	}

	return 0;
}
