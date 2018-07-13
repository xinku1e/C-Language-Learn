/*枚举法
1. 设t为2
2. 如果u和v都能被t整除，则记下这个t
3. t+1后重复第二步，直到t 等于u或v；
4.那么，曾经记下的最大的可以同时除以 u 和v 的就是gcd 

*/
#include <stdio.h>


int main()
{
	int a,b;
	scanf("%d %d", &a, &b);
	int i;
	int min;
	int gcd;
	if(a>b){
		min = b;
	}else{
		min = a;
	}
	for(i=1 ; i<min; i++){
		if(a%i==0){
			if(b%i==0){
				gcd = i;
			}
		}
	}
	printf("%d和%d的最大公约数为%d\n",a,b,gcd);
	return 0;
 } 
