#include <stdio.h>
int main()
{
	int a,b;
	int max = 0;
	scanf("%d %d", &a, &b);
	if(a>b)
	{
		max = a;
	}else{
		max = b;
	}
	printf("最大数为：%d",max);
	return 0;
 } 
