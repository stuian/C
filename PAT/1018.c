#include <stdio.h>

char compare(int c,int j,int b){ 
	if(b >= c){
		if(b >= j) {
			return 'B';
		}
		else{
			return 'J';
		}
	}
	else if(c >= j){ //b<c
		return 'C';
	}	
	else{
		return 'J';
	}
}

int main(){
	
	int i,num;
	char a,b;
	int win=0,ping=0,lose=0;
	int countac=0,countaj=0,countab=0;
	int countbc=0,countbj=0,countbb=0;
	
	if(scanf("%d",&num)){};
	
	for(i = 0;i < num;i++){
		if(scanf("%c %c",&a,&b)){};//Ö»¿´a 
		if(a==b){
			ping++;
		}
		else{
			if(a=='B'){
				if(b=='C'){
					win++;countab++;
				}
				else{
					lose++;countbj++;
				}
			}
			if(a=='C'){
				if(b=='B'){
					lose++;countbb++;
				}
				else{
					win++;countac++;
				}
			}
			if(a=='J'){
				if(b=='B'){
					win++;countaj++;
				}
				else{
					lose++;countbc++;
				}
			}	
		}
	}
	
	printf("%d %d %d\n",win,ping,lose);
	printf("%d %d %d\n",lose,ping,win);
	printf("%c %c",compare(countac,countaj,countab),compare(countbc,countbj,countbb));

    return 0;
}
