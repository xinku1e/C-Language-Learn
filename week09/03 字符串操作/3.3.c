#include <stdio.h>
/*
	int main(int argc, char const *argv[])
	argv[0]�������
	��ʹ��Unix�ķ�������ʱ����Ӧ�������ӵ����� 
*/
int main(int argc, char const *argv[])
{
	int i;
	char a[][10] = {"Hello!"};
	printf("%s\n",a[0]);
	
	for(i=0; i<argc; i++){
		printf("%d:%s\n",i, argv[i]);
	}
	return 0;
}
