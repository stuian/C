#include <stdio.h>
#include <string.h>

//错误的地方在于break只是退出里面的一层循环，打印了两个no 

int main()
{
	//这道题不看别人的分析，题都读不懂 
	
	int num,i,j,flag;
	char s[101];
	int cnp,cna,cnt;
	char *p,*q;
	
	scanf("%d",&num);
	
	for(i=0;i<num;i++){
		scanf("%s",s);
		cnp = 0,cna = 0,cnt = 0;flag = 1;
		for(j=0;j < strlen(s);j++){ //只考虑符合的情况就好了 
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
			p = strchr(s,'P');//返回的是s中P字符的位置
			q = strchr(s,'T');//字符串指针 
			//地址相减得到的是元素的个数
			//打印两个地址之间的元素
			//位置a中A的个数：p-s; b:q-p-1;c:strlen(q)-1;
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
