#include <stdio.h>
int main()
{
	// 逗号运算符  逗号用来连接两个表达式 并以右边的表达式的值作为它的结果 逗号运算符的优先级是所有运算符中最低的 
	int i;
	i = (3+5,5+6);
	printf("%d",i);
	return 0;
}
