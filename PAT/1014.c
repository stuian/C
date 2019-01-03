# include <stdio.h>
# include <string.h>

int main(){
	//变形的字符匹配（在同一个位置匹配）;仔细审题
	
	char a[60],b[60],c[60],d[60];
	int i,length1,length2,temp,flag=1;
	
	if(scanf("%s %s %s %s",a,b,c,d)){};
	
	length1 = strlen(a);
	length2 = strlen(b);
	
	temp = (length1>length2)? length2 : length1;
	
	//判断星期和小时 
	for(i=0;i<temp;i++){
		if(a[i] == b[i] && flag==1 && a[i] >= 'A' && a[i] <= 'G'){
			//第一对相同大写字母的位置 
			flag++;
			switch(a[i]){
				case 'A':
					printf("MON ");break;
					//MON
				case 'B':
					printf("TUE ");break;	
					//TUE
				case 'C':
					printf("WED ");break;
					//WED
				case 'D':
					printf("THU ");break;
					//THU
				case 'E':
					printf("FRI ");break;
					//FRI
				case 'F':
					printf("SAT ");break;
					//SAT
				case 'G':
					printf("SUN ");break;
					//SUN
			}
		}
		else if(a[i] == b[i] && flag==2){
		    if((a[i] >= '0' && a[i] <= '9') || (a[i] >= 'A' && a[i] <= 'N')){
	  		    switch(a[i]){
	  				case '0':
	  					printf("00:");break;
	  					//0
	  				case '1':	
	  					printf("01:");break;
	  				case '2':
	  					printf("02:");break;
	  				case '3':
	  					printf("03:");break;
	  				case '4':
	  					printf("04:");break;
	  				case '5':
	  					printf("05:");break;
	  				case '6':
	  					printf("06:");break;
	  				case '7':
	  					printf("07:");break;
	  				case '8':	
	  					printf("08:");break;
	  				case '9':
	  					printf("09:");break;
	  				case 'A':
	  					printf("10:");break;
	  				case 'B':	
	  					printf("11:");break;
	  				case 'C':
	  					printf("12:");break;
	  				case 'D':
	  					printf("13:");break;
	  				case 'E':
	  					printf("14:");break;
	  				case 'F':
	  					printf("15:");break;
	  				case 'G':
	  					printf("16:");break;
	  				case 'H':
	  					printf("17:");break;
	  				case 'I':	
	  					printf("18:");break;
	  				case 'J':
	  					printf("19:");break;
	  				case 'K':
	  					printf("20:");break;
	  				case 'L':
	  					printf("21:");break;
	  				case 'M':
	  					printf("22:");break;
	  				case 'N':
	  					printf("23:");break; 
	  			}
	  			break;
		    }
			
		}
	}
	
	//判断分钟
	length1 = strlen(c);
	length2 = strlen(d);
	
	temp = (length1>length2)? length2 : length1;
	
	for(i=0;i<temp;i++){
		if(c[i] == d[i]){
			if((c[i] >= 'a' && c[i] <= 'z' ) || (c[i] >= 'A' && c[i] <= 'Z')){
				if(i<10){
					printf("0%d",i);
				}
				else{
					printf("%d",i);
				}
				break;
			}
			
		}
	}
	return 0;
}
