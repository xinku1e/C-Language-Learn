#include <stdio.h>
int main()
{
	//break; 跳出循环 continue；跳过循环这一轮剩下的语句进入
	
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
		printf("ÊÇËØÊý");
	}else{
		printf("²»ÊÇËØÊý");
	}
	return 0;
}