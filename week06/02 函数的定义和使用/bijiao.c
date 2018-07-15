#include <stdio.h>

int max(int a, int b){
	int ret;
	if(a>b){
		ret = a;
	}
	else{
		ret = b;
	}
	return ret;
}

int main()
{
	int a = 5;
	int b = 6;
	int c = max(12, 13);
	c = max(c,11);
	c = max(max(a, b), c);
	printf("%d", c);
	max(12,10);
	return 0;
 } 
