#include <stdio.h>
#include <string.h>

//����ĵط�����breakֻ���˳������һ��ѭ������ӡ������no 

int main()
{
	//����ⲻ�����˵ķ������ⶼ������ 
	
	int num,i,j,flag;
	char s[101];
	int cnp,cna,cnt;
	char *p,*q;
	
	scanf("%d",&num);
	
	for(i=0;i<num;i++){
		scanf("%s",s);
		cnp = 0,cna = 0,cnt = 0;flag = 1;
		for(j=0;j < strlen(s);j++){ //ֻ���Ƿ��ϵ�����ͺ��� 
			if(s[j] == 'P'){
				cnp++;
			}
			else if(s[j] == 'A'){
				cna++;
			}
			else if(s[j] == 'T'){
				cnt++;
			}
			else{
				flag = 0;
				break;
			}
		}
//		printf("cnp:%d cna:%d cnt:%d\n",cnp,cna,cnt);
		if(flag == 1 && cnp==1 && cnt ==1 && cna!=0){
			p = strchr(s,'P');//���ص���s��P�ַ���λ��
			q = strchr(s,'T');//�ַ���ָ�� 
			//��ַ����õ�����Ԫ�صĸ���
			//��ӡ������ַ֮���Ԫ��
			//λ��a��A�ĸ�����p-s; b:q-p-1;c:strlen(q)-1;
//			printf("a:%d b:%d c:%d\n",p-s,q-p-1,strlen(q)-1);
			if((p-s)*(q-p-1) == strlen(q)-1){
				flag = 2;
			}
		}
		else{
			flag = 0;
		}
		
		if(flag == 2){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	
	return 0;
}
