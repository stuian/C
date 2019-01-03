# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int comp(const void *a,const void *b){
	return *(int *)a - *(int *)b; //递增 
}
int cmp(const void *a,const void *b){
	return *(int *)b - *(int *)a; //递减 
}

int calc(char s[],int num,int jian){
	int i;
	qsort(s,4,s[0],cmp);
	for(i=0;i<4;i++){
		num += pow(10,3-i)*(s[i]-'0');
	}
	
	qsort(s,4,s[0],comp);
	for(i=0;i<4;i++){
		jian += pow(10,3-i)*(s[i]-'0');
	}
	return num,jian,num-jian;
}

int main(){
	int num=0,jian=0,differ=0;
	char s[4];
	int i,temp;
	
	scanf("%s",s);//scanf不读入回车和空格 
	
	num = (s[0]-'0')*1000 + (s[1]-'0')*100 + (s[2]-'0')*10 + (s[3]-'0');
	
	if (num%1111==0) {
		printf("%d - %d = 0000",num,num);
	}
	else{
		num,jian,differ = calc(s,num,jian);
		while (differ!=6174) {
			printf("%4d - %4d = %4d\n",num,jian,differ);
			s[3] = differ%10 + '0';
			s[2] = differ/ 10 % 10 + '0';
			s[1] = differ/ 100 % 10 + '0';
			s[0] = differ/ 1000 + '0';
			num,jian,differ = calc(s,num,jian);
		}
	}
		
	
	return 0;
}

