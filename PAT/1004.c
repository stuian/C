# include <stdio.h>
# include <string.h> 

int main()
{
	char maxname[11],maxid[11],minname[11],minid[11],tempname[11],tempid[11];
	int num,maxscore,minscore,tempscore;
	int i;
	
	
	if(scanf("%d",&num)){};
	
	for(i=0;i<num;i++){
		if(scanf("%s%s%d",tempname,tempid,&tempscore)){}; //scanf-s遇到空格就停止了 	
		//别把scanf：&变量名给忘了 
//		printf("%s %s %d\n",tempname,tempid,tempscore);
		if(i == 0){ //赋值和判断是否相等 
			strcpy(minname,tempname);
			strcpy(maxname,tempname);
			strcpy(minid,tempid);
			strcpy(maxid,tempid);
			maxscore = tempscore;
			minscore = tempscore;
//			printf("%d:%s %s %d\n",flag,tempname,tempid,tempscore);
		}
		else{
			if(tempscore>maxscore){
				strcpy(maxname,tempname);
				strcpy(maxid,tempid);
				maxscore = tempscore;
//				printf("%d:%s %s %d\n",flag,maxname,maxid,maxscore);
			}
			else if(tempscore<minscore){
				strcpy(minname,tempname);
				strcpy(minid,tempid);
				minscore = tempscore;
//				printf("%d:%s %s %d\n",flag,minname,minid,minscore);
			}
			else{
				;
			}
		}
	}
	
	printf("%s %s\n",maxname,maxid);
	printf("%s %s\n",minname,minid);
	
	
	return 0;
}
