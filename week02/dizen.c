#include <stdio.h>
int main()
{
	/* a++��a��1��ǰ��ֵ ��++a��a��1�Ժ��ֵ �����ĸ� a�Լ���ֵ����1�� 
	   ++ --  �����������������ʷ��Դ ���Ե���ʹ�� ����Ҫ��Ͻ����ʽ �� ++i++ 
	*/
	int a ;
	a = 10;
	
	printf("a++ = %d  ", a++);
	printf("a = %d\n", a); 
	
	printf("++a = %d  ", ++a);
	printf("a = %d\n", a);
	return 0;
 }
