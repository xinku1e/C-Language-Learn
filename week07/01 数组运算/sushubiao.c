#include <stdio.h>
int main()
{
	/*  算法 
	     想要构造n以内的素数表
	1.令x为2
	2.将2x、3x、4x、直至ax<n的数标记为非素数
	3.令x为下一个没有被标记为非素数的数，重复2；直到所有的数都尝试完毕 
	*/
	/*   想要构造n以内的素数表
	1.开辟prime[n]，初始化所有元素为1，prime[x]为1表示x是素数 
	2.令x=2 
	3. 如果x是素数，则对于（i=2；x*i<n; i++）令prime[i*x] = 0
	4.令x++， 如果x<n，重复3，否则结束 
	*/
	const int maxNumber = 10000;
	int isPrime[maxNumber];
	int i;
	int x;
	for(i=0; i<maxNumber; i++){
		isPrime[i] = 1;
	}
	for(x=2; x<maxNumber; x++){
		if(isPrime[x]){
			for(i=2; i*x<maxNumber;i++){
				isPrime[i*x] = 0;
			}
		}
	}
	for(i=2; i<maxNumber; i++){
		if(isPrime[i]){
			printf("%d\t",i);
		}
	}
	printf("\n");
	return 0;
}
