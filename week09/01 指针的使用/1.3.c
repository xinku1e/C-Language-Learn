#include <stdio.h>
//有效的除法 
/*
	@return 如果除法成功，返回1；否则返回0 
	
			指针应用场景
	函数运算的状态， 结果通过指针返回
	常用的套路是让函数返回特殊的不属于有效范围内的值来表示出错
	-1或0（在文件操作中会看到大量的例子）
	但是当任何数值都是有效值的可能结果时，就得分开返回了 
*/ 
int divide(int a, int b, int *result);

int main()
{
	int a = 5;
	int b = 0 ;
	int c;
	if(divide(a,b,&c)){
		printf("%d/%d=%d\n",a,b,c);
	}
	
	return 0;
 }
 
int divide(int a, int b, int *result)
 {
 	int ret = 1;
 	if(b==0) ret = 0;
 	else{
 		*result = a/b;
	 }
	return ret;
  } 
