#include <stdio.h>
/*
int amount[] = {1,5,10,25,50};
char *name[] = {"penny","nickel","dime","quarter","half-dollar"}; 
*/

struct {
	int amount;
	char *name;
}coins[]={{1,"penny"},{5,"nickel"},{10,"dime"},{25,"quarter"},{50,"half-dollar"}};
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
	int i;
	//int ret = search(x, amount, sizeof(amount)/sizeof(amount[0]));
	for( i=0; i<sizeof(coins)/sizeof(coins[0]); i++){
		if(x == coins[i].amount){
			printf("%dÃÀ·ÖµÄÓ²±Ò½Ð£º%s\n", x, coins[i].name); 
			break;
		}
	}
	return 0;
 } 
