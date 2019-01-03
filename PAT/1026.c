# include <stdio.h>

int main(){
	int a,b,time;
	int h,m,s;
	
	if(scanf("%d %d",&a,&b)){};
	
	//ÄÑµãÈ¡Óà 
	
	time = (b - a) / 100;
	if((time % 100) >= 50){
		time++;
	}
	h = time / 3600;
	m = time %3600 / 60;
	s = time % 60;
	
	printf("%02d:%02d:%02d",h,m,s);
	//02d
	
	return 0;
}
