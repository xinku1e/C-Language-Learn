#include <stdio.h>

int main()
{
	//常量定义格式： 	const int AMOUNT = 100;
	//const是一个修饰符，加在int前面 用来给这个变量加上一个const（不变的）属性。这个属性表示
	//这个变量的值一旦被初始化就不能再修改了 
	
	const int AMOUNT = 100;
	int price = 0;
	
	printf("请输入金额（元）");
	scanf("%d",&price);
	
	int change = AMOUNT - price;
	
	printf("找您%d元\n",change);
	
	return 0;
}
