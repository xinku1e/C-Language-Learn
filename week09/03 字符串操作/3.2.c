#include <stdio.h>
/*
	char **a   a是一个指针，指向另一个指针，那个指针指向一个字符或字符串
	char a[][]
	char a[][10] 和char *a[]不一样 
*/
int main()
{
	char *a[] = {"Hello"} ;
	printf("%c\n", a[0][1]);
	printf("llllllllllllll");
	return 0;
 } 
