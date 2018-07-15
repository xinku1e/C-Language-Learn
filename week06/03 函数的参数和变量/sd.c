#include <stdio.h>

void sum(int a,int b); // 函数的声明 

int main()
{
	sum(1,2);
	return 0;
 }
 
 void sum(int a,int b){ // 函数的定义 
	int i;
	int sum = 0;
	for(i=a; i<=b; i++){
		sum = sum + i;
	}
	printf("%d到%d的和为：%d\n", a, b, sum);
}