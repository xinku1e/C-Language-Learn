#include <stdio.h>
#include <math.h> 
int isPrime(int x){
	int ret = 1;
	int i;
	if(x%2 == 0 && x!=2){
		ret = 0;
	}
	for(i=3; i<=sqrt(x); i+=2){
		if(x%i == 0){
			ret = 0;
			break;
		}
	}
	return ret;
} 

int main()
{
	int i;
	int sum = 0;
	for(i=2; i<1000; i++){
		if(isPrime(i)){
			printf("%d ",i);
			sum = sum+i;
		}
	} 
	printf("\n");
	printf("%d",sum);
	return 0;
	/*
	int x;
	printf("请输入一个数\n");
	scanf("%d", &x);
	if(isPrime(x)){
		printf("是素数\n");
	}else{
		printf("不是素数\n");
	}
	return 0;
	*/
	
}
