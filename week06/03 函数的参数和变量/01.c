#include <stdio.h>

void swap(int a, int b);

int main()
{
	int a = 5;
	int b =6;
	
	swap(a, b);//C语言在调用函数的时候，永远只能传值给函数. 
	
	printf("a=%d,b=%d\n", a, b);
	return 0;
}

void swap(int a, int b){
	int t = a;
	a = b;
	b = t;
}
