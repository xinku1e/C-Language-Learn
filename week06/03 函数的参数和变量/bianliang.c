#include <stdio.h>
void swap(int a, int b);

int main()
/*
1.本地变量是定义在块内的
    它可以是定义在函数的块内
	也可以定义在语句的块内
	甚至可以随便拉一对大括号来定义变量
2.程序运行进入这个块之前，其中的变量就不存在，离开这个块，其中的变量就消失了
3.块外面定义的变量在里面仍然有效
4.块里面定义了和外面同名的变量，则会掩盖外面的变量。 
*/
{
	int a = 5;
	int b = 6;
	swap (a,b);
	{
		int a = 0;
		printf("a=%d\n", a);
	}
	printf("a=%d, b=%d\n", a, b);
	return 0;
 } 
 
void swap(int a, int b){
	int swap;
	int t = a;
	a = b;
	b = t;
}
