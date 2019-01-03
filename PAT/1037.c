# include <stdio.h>
# include <math.h>

int main(){
	
	int gallen,sickle,knut;
	int sum1,sum2,change;
	
	scanf("%d.%d.%d",&gallen,&sickle,&knut); 
	sum1 = knut + gallen*17*29 + sickle*29;
	
	scanf("%d.%d.%d",&gallen,&sickle,&knut); 
	sum2 = knut + gallen*17*29 + sickle*29;
	
	change = sum2 - sum1;
	
	if(change<0){
		change = - change;
		printf("-");
	}
	printf("%d.%d.%d",change/(29*17),change/29%17,change%29);
	
	return 0;
}
