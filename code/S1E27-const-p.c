# include <stdio.h>

int main() 
{
	int num = 520;
	
	const float pi = 3.14;
	const int *pc = &num;
	//ָ��ָ���ֵ�ǲ������޸ĵģ�����ָ���ָ���ǿ����޸ĵġ� 
	//�ñ���ֻ�����������޸��� 
	
	int * const pi = &num;//����ָ��
	//�����޸�ָ��ָ���ֵ�����������ָ�򲻿����޸��ˡ� 
	
	return 0;
}

//ͨ��const 
