#include <stdio.h>
/*这里 a[]就是指针 可以写成 *a 
  		以下四种函数原型是一样的
  int sum(int *ar,int n); 
  int sum(int *,int); 
  int sum(int ar[],int n);
  int sum(int [],int);  
  
  		数组变量是特殊的指针
  int a[10]；int *p = a; //无需用&取地址
  	但是数组的单元表达的是变量， 需要用&取地址 
  a == &a[0]
  
		  []运算符可以对数组做，也可以对指针做；
  p[0] <==> a[0] 
  
  *运算符可以对指针做，也可以对数组做；
  *a = 25； 
    
*/ 
void minmax(int a[], int len, int *min, int *max);

int main()
{
	int a [] = {1,2,3,4,5,6,7,8,9,12,13,14,16,17,21,23,55};
	int min, max;
	printf("main sizeof(a) = %d\n", sizeof(a));
	printf("main a=%p\n", a);
	minmax(a, sizeof(a)/sizeof(a[0]), &min, &max);
	printf("a[0] = %d\n", a[0]);
	printf("min=%d, max=%d\n", min, max);
    int *p  = &min;
	printf("*p = %d\n", *p);
	printf("p[0] = %d\n", p[0]);
	printf("*a = %d\n", *a);
	return 0;
}

void minmax(int a[], int len, int *min, int *max)
{
	int i;
	printf("minmax sizeof(a) = %d\n", sizeof(a));
	printf("main a=%p\n", a);
	a[0] = 1000;
	*min = *max = a[0];
	for( i=1; i<len; i++ ){
		if( a[i] < *min){
			*min = a[i];
		}
		if(a[i] > *max ){
			*max = a[i];
		}
	}
}
