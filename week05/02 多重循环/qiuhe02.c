#include <stdio.h>
int main()
{
	int i;
	int n;
	scanf("%d",&n);
	double sum = 0.0;
	double a = 1.0;
	for(i = 1 ; i <= n ; i++){
		sum = sum +1*a/i;
		a = -a;
	}
	printf("%f", sum);
	return 0;
}
