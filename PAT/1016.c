# include <stdio.h>
# include <string.h>

int main()
{
	char a[11],b[11];
	char parta,partb;
	int i,count1=0,count2=0,len,pa=0,pb=0;
	
	if(scanf("%s %c %s %c",a,&parta,b,&partb)){};
	
	len = strlen(a);
//	printf("len:%d\n",len);
	for(i=0;i<len;i++){
		if(a[i]==parta){
			count1++;
		}
	}
	
	len = strlen(b);
//	printf("len:%d\n",len);
	for(i=0;i<len;i++){
		if(b[i]==partb){
			count2++;
		}
	}
	
	if(count1>0){
		for(i=1;i<=count1;i++){
			pa = pa * 10 + (parta - '0');
		}
	}
	
//	printf("count2 = %d\n",count2);
	
	if(count2>0){
		for(i=1;i<=count2;i++){
			pb = pb * 10 + (partb - '0');
		}
	}
	
//	printf("pa=%d,pb=%d\n",pa,pb);
	
	printf("%d",pa+pb);
	
	return 0;
}
