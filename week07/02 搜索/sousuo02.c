#include <stdio.h>

int amount[] = {1,5,10,25,50};
char *name[] = {"penny","nickel","dime","quarter","half-dollar"}; 

int search(int key, int a[], int length){
	int i;
	int ret = -1;
	for(i=0; i<length; i++){
		if(a[i]==key){
			ret = i;
			break;
		}
	}
	return ret;
}
int main()
{
	int a[] = {1,3,4,5,12,14,13,49};
	int x;
	scanf("%d",&x);
	int ret = search(x, amount, sizeof(amount)/sizeof(amount[0]));
	if(ret == -1){
		printf("%d����û�ж�Ӧ��Ӳ��\n",x);
		}
	else{
		printf("%d���ֵ�Ӳ�ҽУ�%s\n", x, name[ret]); 
	}
	return 0;
 } 
