#include <stdio.h>
//
/*
	数组变量是特殊的指针 
*/
void minmax(int a[], int len, int *min, int *max);

int main()
{
	int a[] = {1,2,3,4,5,6,7,8,9,33,55,66,77,55,};
	int min, max;
	
	printf("main sizeof(a) = %d\n", sizeof(a));//在main函数中 数组a的大小 
	printf("main a =%p\n",a); 
	 
	minmax(a, sizeof(a)/sizeof(a[0]), &min, &max);
	printf("min=%d, max=%d\n", min, max);
	printf("a[0]=%d\n",a[0]);
	int *p = &min;
	printf("*p=%d\n",*p);
	printf("p[0]=%d\n",p[0]);
	printf("*a=%d\n",*a);
	
	return 0;
 }
 void minmax(int a[], int len, int *min, int *max)
 {
 	int i;
 	*min = *max = a[0];
 	printf("minmax sizeof(a) = %d\n", sizeof(a));
 	printf("minmax a =%p\n",a);
 	a[0]=1000;
 	for(i=0; i<len; i++)
 	{
 		if(a[i]<*min){
 			*min = a[i];
		 }
		if(a[i]>*max){
			*max = a[i];
		}
	 }
 	
 }
