# include <stdio.h>
# include <math.h>

int main()
{
	float price,area,yir,mir;//���ۡ�����������ʡ������� 
	float interest,loan;//��Ϣ�������ܶ� 
	float ave_repay,down_payment;//�¾�������ڸ��� 
	float total_price,total_repay;//�����ܶ�����ܶ� 
	int ratio,time;//���ҳ������������� 
	
	printf("�����뵥�ۣ�Ԫ/ƽ������") ;
	scanf("%f",&price) ;
	prinf("�����������");
	scanf("%f",&area);
	printf("�����밴�ҳ�����");
	scanf("%d",&ratio);
	printf("�����밴��������");
	scanf("%d",&time);
	printf("�����뵱ǰ��׼�����ʣ�");
	scanf("%f",&yir);
	
	mir = yir / 100 / 12;
	
	total_price = price * area;
	loan = total_price * (ratio/10.0);
	down_payment = total_price - loan;
	ave_repay = loan*mir*pow((1+mir),(time*12))/(pow((1+mir),(time*12))-1);
	interest = time*12*ave_repay-loan;
	total_repay = loan + interest;
	
	
	
	printf("========������========\n");
	printf("�����ܶ%.2fԪ\n",total_price);
	printf("���ڸ��%.2fԪ\n",down_payment);
	printf("�����ܶ%.2fԪ\n",loan);
	printf("�����ܶ%.2fԪ\n",total_repay);
	printf("֧����Ϣ��%.2fԪ\n",interest);
	printf("�¾����%.2fԪ\n",ave_repay);
	
	return 0;
}
