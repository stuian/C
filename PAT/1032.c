# include <stdio.h>
# include <stdlib.h>

/*
6
3 65
2 80
1 100
2 70
3 40
3 0
*/

int cmp(const void *a1,const void *b1){
	int *a = (int *)a1,*b = (int *)b1;
	return b[1] - a[1];
}

int main(){
	int num;
	int i,id,score;
	int s[100000][2];
	
	for(i=0;i<100000;i++){
		s[i][0] = i+1;
		s[i][1] = 0;
	}
	
	scanf("%d",&num);
	for(i=0;i<num;i++){
		scanf("%d %d",&id,&score);
		s[id-1][1] += score;
	}
	
	qsort(&s[0],num,sizeof(s[0]),cmp);
	
	printf("%d %d",s[0][0],s[0][1]);
	
	return 0;
}
