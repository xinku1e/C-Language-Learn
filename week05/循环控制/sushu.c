#include <stdio.h>
int main()
{
	break; ����ѭ��  continue����ѭ����һ��ʣ�µ���������һ�� 
	
	int x;
	scanf("%d",&x);
	int i;
	int isPrime = 1;
	for(i=2;i<x;i++){
		if(x%i==0){
			isPrime = 0;
			break;
		}
	}
	if(isPrime==1){
		printf("������");
	}else{
		printf("��������");
	}
	return 0;
}
