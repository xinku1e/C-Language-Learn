#include <stdio.h>
int main()
/*
	指针就是保存地址的变量  int i； int* p = &i；int* p，q； int *p，q；
 		              其中int* p，q；表示的是一个指针p 和一个int变量q
 		              
 	******************************
 	作为参数的指针
	 void f（int *p）；
	 在被调用的时候得到了某个变量的地址；
	 int i = 0； f（&i）；
	 在函数里面可以通过这个指针访问外面这个i； 
 	
   */
       
{
	void f(int *p);
	int i =6;
	printf("&i=%p\n",&i);
	f(&i);
	return 0;
}

void f(int *p)
{
	printf(" p=%p\n", p);
}
