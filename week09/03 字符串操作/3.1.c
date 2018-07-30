#include <stdio.h>

int main()
{
	char ch;
	while((ch=getchar()) != EOF){
		putchar(ch); 
	} 
	int n;
	scanf("%d", &n);
	printf("n=%d\n", n);
	
	printf("EOF\n");
	printf("EOF is %d\n", EOF);
	
	return 0;
}  