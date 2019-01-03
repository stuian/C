# include <stdio.h>
# include <math.h>
//目标是：通过样例 

//辗转相除法 
int gcd(long long int a,long long int b){
	return b==0 ? a : gcd(b,a%b);
}

void print(long long int m,long long int n){
	//如果是负数
	long long int k,a,b;
	
	k = m / n;
	if(k!=0){
		a = m - k*n;
	}
	else{
		a = m;
	}
	b = n;
	
	if(a==0){//分子为0 
		if(k==0){//整个数为0 
			printf("0");
		}
		else if(k<0){
			printf("(%lld)",k);
		}
		else{
			printf("%lld",k);
		}	
	}
	else{
		if(k==0){
			if(a<0){
				printf("(%lld/%lld)",a,b);
			}
			else{
				printf("%lld/%lld",a,b);
			}
		}
		else if(k<0){
			printf("(%lld %lld/%lld)",k,abs(a),b);
		}
		else{
			printf("%lld %lld/%lld",k,abs(a),b);
		}	
	}
}

void add(long long int a1,long long int b1,long long int a2,long long int b2){
	long long int a3,b3,gcd3;
	
	print(a1,b1);
	printf(" + ");
	print(a2,b2);
	printf(" = ");
	a3 = a1*b2 + a2*b1;
	b3 = b1*b2;
	gcd3 = abs(gcd(a3,b3));
	a3 /= gcd3;
	b3 /= gcd3;
	print(a3,b3);
	printf("\n");
}

void substract(long long int a1,long long int b1,long long int a2,long long int b2){
	long long int a3,b3,gcd3;
	
	print(a1,b1);
	printf(" - ");
	print(a2,b2);
	printf(" = ");
	a3 = a1*b2 - a2*b1;
	b3 = b1*b2;
	gcd3 = abs(gcd(a3,b3));
	a3 /= gcd3;
	b3 /= gcd3;
	print(a3,b3);
	printf("\n");
}

void multiply(long long int a1,long long int b1,long long int a2,long long int b2){
	long long int a3,b3,gcd3;
	
	print(a1,b1);
	printf(" * ");
	print(a2,b2);
	printf(" = ");
	if(a1==0 || a2==0){
		printf("0");
	}
	else{
		a3 = a1*a2;
		b3 = b1*b2;
		gcd3 = abs(gcd(a3,b3));
		a3 /= gcd3;
		b3 /= gcd3;
		print(a3,b3);
		printf("\n");
	}
}

void divide(long long int a1,long long int b1,long long int a2,long long int b2){
	long long int a3,b3,gcd3;
	
	print(a1,b1);
	printf(" / ");
	print(a2,b2);
	printf(" = ");
	if(a2==0){
		printf("Inf");
	}
	else{
		if(a2<0){
			a3 = a1*b2*(-1); //2/3 / (-2) = (-1/3)过不去 
			b3 = b1*abs(a2);
		}
		else{
			a3 = a1*b2;
			b3 = b1*a2;
		}
		gcd3 = abs(gcd(a3,b3));
		a3 /= gcd3;
		b3 /= gcd3;
//		printf("\n%lld %lld\n",a3,b3);
		print(a3,b3);
	}
	printf("\n");
}

int main(){
	long long int a1,b1,a2,b2;
	long long int gcd1,gcd2;
	
	scanf("%lld/%lld %lld/%lld",&a1,&b1,&a2,&b2);

	//化简(如：10/8->5/4) 
	gcd1 = abs(gcd(a1,b1));
	a1 /= gcd1;
	b1 /= gcd1;
	
	gcd2 = abs(gcd(a2,b2));
	a2 /= gcd2;
	b2 /= gcd2;
	
//	printf("%lld %lld %lld %lld\n",a1,b1,a2,b2);
	
	add(a1,b1,a2,b2);
	substract(a1,b1,a2,b2);
	multiply(a1,b1,a2,b2);
	divide(a1,b1,a2,b2);
	
	return 0;
}
