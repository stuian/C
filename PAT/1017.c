# include <stdio.h>
# include <string.h>

int main()
{
	char a[1000]={0},q[1000]={0}; //��ʼֵ��Ϊ0���������н������� 
	int i,j=0,b,temp=0,flag=0;
	
	if(scanf("%s %d",a,&b)){};
	
//	printf("%d",strlen(a));//21
	
	for(i = 0;i<strlen(a);i++){ //124 / 3
		if(flag == 0){
			temp = temp*10 + (a[i] - '0');
//				printf("temp:%d",temp); 
			if(temp / b == 0){
				q[j++] = '0';
			}
			if(temp / b > 0){
				flag = 1;
			}
		} //������Ϊ0ʱû�мӽ�ȥ 
		if(flag == 1){ 
			q[j++] = (temp / b) + '0'; //12 / 7 = 2;
			//j��q�е�����
//				printf("Ŀǰ��size�ǣ�%d %s\n",strlen(q),q);
			temp = temp % b; //0;1
//				printf("����Ϊ��%d\n",temp);
			flag = 0;
		}
	}
	
	if(q[0]!='0'){
		printf("%d",q[0]-'0');
	}
	else{
		if(q[1]==0){
			printf("0");
		}
	}
	
	//����AȫΪ0ʱ�������һ��0 
	for(i= 1;i<strlen(q);i++){
		printf("%d",q[i]-'0');
	} 
	
	printf(" %d",temp);
	
	return 0;
}
