#include <stdio.h>
int main()
{
	/*
	��ֵ�����   ��ֵҲ�����㣬Ҳ�н��
	             a = 6�Ľ����a�������ֵ��Ҳ����6
				 a = b = 6 -->	a = ��b =6��
	Ƕ��ʽ��ֵ int a=6��b��
	           int c = 1+��b = a�� 
	        �������Ķ�  ���ײ������� 
	
	
	
	
	*/
	int a,b;
	
	scanf("%d %d", &a, &b);
	
	double c = (a+b)/2.0;
	
	printf("%d��%d��ƽ��ֵΪ%f", a, b, c);
	
	return 0;
 } 
