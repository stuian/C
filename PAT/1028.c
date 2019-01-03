# include <stdio.h>
# include <stdlib.h>

struct information{
	char name[6];
	int year;
	int month;
	int day;
}min = {"min",2014,9,6},max = {"max",1814,9,6};

typedef struct information *info;

//年纪排序 
/*日期在1814年9月6日至2014年9月6日之间有效,升序*/
int compare(const void *a_,const void *b_){
	info *a = (info *)a_,*b = (info *)b_;
	if(a->year != b->year){
		return a->year - b->year;
	}
	else if(a->month != b->month){
		return a->month - b->month;
	}
	else if(a->day != b->day){
		return a->day - b->day;
	}
}

int main(){
	int num,i,count = 0;
//	int year,month,day;//结构体数组 
	char c1,c2;
	info *people;
	
	if(scanf("%d",&num)){};
	
	people = (info *)malloc(num * sizeof(info));
	people[count] = (info)malloc(sizeof(info));
	
	for(i=0;i<num;i++){
		scanf("%s %d%c%d%c%d",people[count]->name,&people[count]->year,&c1,&people[count]->month,&c2,&people[count]->day);
		if(compare(&people[count],&min) > 0 || compare(&people[count],&max) < 0){
			continue;
		}
		count++;
		people[count] = (info)malloc(sizeof(info));
	}
	
	qsort(people,count,sizeof(people[0]),compare);
	
	if(count=1){
		printf("1 %s %s",people[0]->name,people[0]->name);
	}
	if(count>1){
		printf("%d %s %s",count,people[0]->name,people[count-1]->name);
	}
	
//	printf("%d%/%02d/%02d",year,month,day);
	
		
	
	return 0;
}
 
