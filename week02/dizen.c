#include <stdio.h>
int main()
{
	/* a++是a加1以前的值 而++a是a加1以后的值 无论哪个 a自己的值都加1了 
	   ++ --  这两个运算符有其历史来源 可以单独使用 但不要组合进表达式 如 ++i++ 
	*/
	int a ;
	a = 10;
	
	printf("a++ = %d  ", a++);
	printf("a = %d\n", a); 
	
	printf("++a = %d  ", ++a);
	printf("a = %d\n", a);
	return 0;
 }
