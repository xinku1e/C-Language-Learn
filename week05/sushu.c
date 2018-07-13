#include <stdio.h>
int main()
{
	//break;跳出循环  continue跳过循环这一轮剩下的语句直接进入下一轮
	
	int x;
	scanf("%d",&x);
	int i;
	int isPrime = 1;
	for(i=2;i<x;i++){
		if(x%i==0){
			isPrime = 0;
			break;
		}
	}
	if(isPrime==1){
		printf("是素数\m");
	}else{
		printf("不是素数\n");
	}
	return 0;
}
