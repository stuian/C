# include <stdio.h>
//ָ��ָ���ָ�� 

int main() 
{
	int num = 1024;int i;
	int *p = &num;
	int **pp = &p; //�����Ķ����ϾͿ��Կ�����ȡֵ��Ҫ�����õĴ�����
	//��Ҫ����**���ܵõ�ǰ���int
	
	char *cbooks[5] = { //ָ��������������ַ������Ϻܷ��� 
		"cר�ұ��",
		"cר�ұ��",
		"cר�ұ��",
		"cר�ұ��",
		"a����ѧc�����"};
	
	char **byFishC;
	char **jiayuLoves[4];
	
	byFishC = &cbooks[4];
	jiayuLoves[0] = &cbooks[0];
	jiayuLoves[1] = &cbooks[1];
	jiayuLoves[2] = &cbooks[2];
	jiayuLoves[3] = &cbooks[3];
	
	printf("%p\n",cbooks[4]);
	printf("%c\n",*(cbooks[4]));
	printf("%s\n",cbooks[4]);
	
	char *tabHeader = "Sound";
	printf("%s\n", tabHeader);
	for(i = 0;tabHeader[i] != '\0';i++){
		printf("%c",*(tabHeader+i));
	}
	return 0;
	
	
//	int array[10] = {0,1,2,3,4,5,6,7,8,9}; 
//	int *p = array;
//	//int **p = array;pָ�벻֪���Ƕ�ά���飬p+1�Ŀ����һ��int 
//	
//	int (*p)[4] = array;
//	
//	int i;
//	
//	for(i = 0;i < 10;i++)
//	{
//		printf("%d\n",*(p+1));
//	}
	
	return 0;
}


