#include <stdio.h>
int main()
{
	//整数正序分解 
	/*
	1234
	1234/1000 = 1
	1234%1000 = 234
	1000/10 = 100
	234/100 = 2
	234%100 = 34
	100/10 = 10
	34/10 = 3
	34%10 = 4
	10/10 = 1
	4/1 = 4
	
	*/
	int x = 1556;
	int t = x;
	int s = 1;
	int d;
	while(t>=10){
		t = t/10;
		s *= 10;
	}
	//printf("s=%d  x = %d",s,x);
	while(s>0){
		d = x/s;  
		x = x%s;  	
		s = s/10; 	
		printf("%d",d);
		if(s>0){
			printf(" ");
		}
		//printf("d = %d x = %d s = %d \n",d,x,s);
	}
	printf("\n");

	
	return 0;
 } 
