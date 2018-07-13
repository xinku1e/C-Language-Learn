#include <stdio.h>
int main()
{
	int i;
	int n;
	scanf("%d",&n);
	double sum = 0.0;
	for(i = 1 ; i<=n ; i++){
		sum = 1.0/i + sum;
	}
	printf("f(%d)=%f\n",n,sum);
	return 0;
}
