#include <stdio.h>
//��Ч�ĳ��� 
/*
	@return ��������ɹ�������1�����򷵻�0 
	
			ָ��Ӧ�ó���
	���������״̬�� ���ͨ��ָ�뷵��
	���õ���·���ú�����������Ĳ�������Ч��Χ�ڵ�ֵ����ʾ����
	-1��0�����ļ������лῴ�����������ӣ�
	���ǵ��κ���ֵ������Чֵ�Ŀ��ܽ��ʱ���͵÷ֿ������� 
*/ 
int divide(int a, int b, int *result);

int main()
{
	int a = 5;
	int b = 0 ;
	int c;
	if(divide(a,b,&c)){
		printf("%d/%d=%d\n",a,b,c);
	}
	
	return 0;
 }
 
int divide(int a, int b, int *result)
 {
 	int ret = 1;
 	if(b==0) ret = 0;
 	else{
 		*result = a/b;
	 }
	return ret;
  } 
