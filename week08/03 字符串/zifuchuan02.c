#include <stdio.h>
int main()
{/*
				�ַ�������
		char* s = "Hello,world"; 
	s��һ��ָ�룬��ʼ��Ϊָ��һ���ַ�������
	��������������ڵĵط�������ʵ����s��const char* s,
	����������ʷ��ԭ�򣬱��������ܲ���const��д�� 
	������ͼ��s��ָ���ַ�����д��ᵼ�����صĺ��
	�����Ҫ�޸��ַ�����Ӧ�������飺
	 char s[] = "Hello��world"��
	 
	 		ָ�뻹�����飿
	char *str = "Hello";
	char word[] = "Hello";
	���飺����ַ���������
	��Ϊ���ر����ռ��Զ�������
	ָ�룺����ַ�����֪��������
	  �������
	  ��̬����ռ�
	  
	  		char*���ַ���? 
	�ַ������Ա��Ϊchar*����ʽ
	char* ��һ�����ַ���
	  ������ָ���ַ���ָ�룬����ָ������ַ������飨����int*һ���� 
	 */
	 int i = 0;
	 char *s = "Hello,world";
	 //s[0] = 'B';
	 char *s2 = "Hello,world";
	 char s3[] = "Hello,world";
	 
	 printf("&i=%p\n",&i);
	 printf(" s=%p\n",s);
	 printf("s2=%p\n",s2);
	 printf("s3=%p\n",s3);
	 s3[0] = 'B';
	 printf("Here!s[0]=%c\n",s[0]);
  	 printf("Here!s3 [0]=%c\n",s3[0]);
 } 
