#include <stdio.h>
void sum(int a,int b){
	int i;
	int sum = 0;
	for(i=a; i<=b; i++){
		sum = sum + i;
	}
	printf("%d到%d的和为：%d\n", a, b, sum);
}
int main()
{
	sum(1,2);
	return 0;
 } 
