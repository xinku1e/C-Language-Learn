#include <stdio.h>
int main(){
	int i = 0;
	int p;
	int a[10];
	
	printf("%p\n", &i);
	printf("%p\n", &p);
	
	printf("%p\n", &a);
	printf("%p\n", a);
	printf("%p\n", &a[0]);
	printf("%p\n", &a[1]);
	return 0;
}