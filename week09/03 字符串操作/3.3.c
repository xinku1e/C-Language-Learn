#include <stdio.h>
/*
	int main(int argc, char const *argv[])
	argv[0]是命令本身
	当使用Unix的符号链接时，反应符号链接的名字 
*/
int main(int argc, char const *argv[])
{
	int i;
	char a[][10] = {"Hello!"};
	printf("%s\n",a[0]);
	
	for(i=0; i<argc; i++){
		printf("%d:%s\n",i, argv[i]);
	}
	return 0;
}
