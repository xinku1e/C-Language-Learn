#include <stdio.h>
int main()
{
	//运算符（operator）是指进行运算的动作比如加法运算符"+"
	//算子（operand） 是指参与运算的值，这个值可能是常数，也可能是变量，还可能是一个方法的返回值
	// a = b + 5 中 a，b，5是算子 = ，+	是运算符
	
	int hour1, minute1;
	int hour2, minute2;
	
	scanf("%d %d", &hour1, &minute1);
	scanf("%d %d", &hour2, &minute2);
	
	int t1 = hour1 * 60 + minute1;
	int t2 = hour2 * 60 + minute2;
	
	int t = t2 - t1;
	printf("时间差是%d小时%d分钟", t/60, t%60);
	
	return 0;
}
