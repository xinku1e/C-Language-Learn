#include <stdio.h>
#include <stdlib.h>
//数组的动态内存分配 
int main()
{
	int number;
	int* a;
	int i;
	printf("输入数量：");
	scanf("%d",&number);
	//int a[number]; //C99才能这么干
	
	a = (int*)malloc(number*sizeof(int));
	for(i=0; i<number; i++){
		scanf("%d", &a[i]);
	}
	for(i=number-1; i>=0; i--){
		printf("%d ", a[i]);
	}
	free(a);
	return 0;
}
