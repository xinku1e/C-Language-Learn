#include <stdio.h>
/*
	char **a   a��һ��ָ�룬ָ����һ��ָ�룬�Ǹ�ָ��ָ��һ���ַ����ַ���
	char a[][]
	char a[][10] ��char *a[]��һ�� 
*/
int main()
{
	char *a[] = {"Hello"} ;
	printf("%c\n", a[0][1]);
	printf("llllllllllllll");
	return 0;
 } 
