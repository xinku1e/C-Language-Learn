#include <stdio.h>
int main()
{
	/*
	赋值运算符   赋值也是运算，也有结果
	             a = 6的结果是a被赋予的值，也就是6
				 a = b = 6 -->	a = （b =6）
	嵌入式赋值 int a=6，b；
	           int c = 1+（b = a） 
	        不利于阅读  容易产生错误 
	
	
	
	
	*/
	int a,b;
	
	scanf("%d %d", &a, &b);
	
	double c = (a+b)/2.0;
	
	printf("%d和%d的平均值为%f", a, b, c);
	
	return 0;
 } 
