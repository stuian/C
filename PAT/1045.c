# include <stdio.h>

//�������϶��ᳬʱ��
//�ο�������1���Ƚ�i��ߵ����ֵ���������ֵ���飩
//2���ұߵ���Сֵ 

int main(){
	int n,i,temp,num[100001],result[100000],max=-1;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&temp);
		num[i] = temp>max?temp:max;
	}
	
	
	return 0;
}
