#include <stdio.h>
int main()
/*
	ָ����Ǳ����ַ�ı���  int i�� int* p = &i��int* p��q�� int *p��q��
 		              ����int* p��q����ʾ����һ��ָ��p ��һ��int����q
 		              
 	******************************
 	��Ϊ������ָ��
	 void f��int *p����
	 �ڱ����õ�ʱ��õ���ĳ�������ĵ�ַ��
	 int i = 0�� f��&i����
	 �ں����������ͨ�����ָ������������i�� 
 	
   */
       
{
	void f(int *p);
	int i =6;
	printf("&i=%p\n",&i);
	f(&i);
	return 0;
}

void f(int *p)
{
	printf(" p=%p\n", p);
}
