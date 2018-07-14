#include <stdio.h>
int main()
{
	int x;
	int cnt = 0;
	double sum = 0;
	scanf("%d", &x);
	int number[100];  
	while(x != -1)
	{
		number[cnt] = x;
		sum = sum + x;
		cnt ++;
		scanf("%d", &x);
	}
	printf("%f\n",sum/cnt);
	int i;
	for(i = 0 ; i < cnt ; i++){
		if(number[i] > sum/cnt){
			printf("%d ",number[i]);
			}
	}
	return 0;
 } 