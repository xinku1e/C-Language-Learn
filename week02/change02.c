#include <stdio.h>

int main()
{
	int amount = 0; 
	int price = 0;
	
	printf("�������Ԫ��");
	scanf("%d",&price);
	
	printf("������Ʊ�棨Ԫ��");
	scanf("%d",&amount);
	
	int change = amount - price;
	
	printf("����%dԪ\n",change);
	
	return 0;
}
