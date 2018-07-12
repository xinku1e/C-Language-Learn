#include <stdio.h>
int main()
{
	int x, a;
	int b = 0;
	scanf("%d",&x);
	do{
		a = x%10;
		b = b*10+a;	
		x /= 10;
	}while(x>0);
	printf("%d",b);
	return 0;
 } 
 
  
