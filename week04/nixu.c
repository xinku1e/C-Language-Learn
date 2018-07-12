#include <stdio.h>
int main()
{
	int x;
	int a = 0;
	
	scanf("%d",&x);
	
	while(x>=10){
		a = x%10;
		printf("%d",a);
		x = (x-a)/10; 
	}
	printf("%d\n",x);
	return 0;
	
 } 
