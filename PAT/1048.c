# include <stdio.h>
# include <string.h>

//Ҫע��ĵط���1�����Ȳ���ȣ����0 

int main(){
	char a[100],b[100];
	int la,lb,p,q,i,maxlen;
	char str[] = "0123456789JQK";
	
	scanf("%s %s",a,b);
	la = strlen(a);
	lb = strlen(b);
	
	maxlen = la > lb ? la : lb;
	
	for(i=0;i<maxlen;i++){
		p = la + i - maxlen < 0 ? 0 : a[la + i - maxlen]-'0';
		q = lb + i - maxlen < 0 ? 0 : b[lb + i - maxlen]-'0';
		if((maxlen-i) % 2 == 0){
			//ż��λ
			putchar('0'+(q-p<0?q-p+10:q-p));
		}
		else{
			putchar(str[(p+q) % 13]); 
		}
	}
	
	return 0;
}
