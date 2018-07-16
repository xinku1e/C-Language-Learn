#include <stdio.h>

void f(int *p);
void g(int k);
 
int main()
{
	/*访问那个地址上的变量
	*是一个单目运算符，用来访问指针的值所表示的地址上的变量
	可以做右值也可以做左值 
	int k = *p；
	*p = k+1； 
	  */
	int i =6;
	printf("&i = %p\n", &i);
	f(&i);
	g(i);
	
	return 0;
}

void f(int *p)
{
	printf(" p = %p\n", p);
	printf("*p = %d\n", *p);
	*p = 26;
}

void g(int k)
{
	printf(" k = %d\n", k);
}
