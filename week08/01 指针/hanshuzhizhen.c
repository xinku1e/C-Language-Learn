#include <stdio.h>

void f(int *p);
void g(int k);
 
int main()
{
	/*�����Ǹ���ַ�ϵı���
	*��һ����Ŀ���������������ָ���ֵ����ʾ�ĵ�ַ�ϵı���
	��������ֵҲ��������ֵ 
	int k = *p��
	*p = k+1�� 
	  */
	int i =6;
	printf("&i = %p\n", &i);
	f(&i);
	g(i);
	
	return 0;
}

void f(int *p)
{
	printf(" p = %p\n", p);
	printf("*p = %d\n", *p);
	*p = 26;
}

void g(int k)
{
	printf(" k = %d\n", k);
}
