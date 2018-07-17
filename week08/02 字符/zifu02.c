#include <stdio.h>
int main()
{
	// ªÏ∫œ ‰»Î
	int i;
	char c;
	scanf("%d %c", &i, &c);
	printf("i=%d, c=%d, c=%c", i, c, c); 
	scanf("%d%c", &i, &c);
	printf("i=%d, c=%d, c=%c", i, c, c); 
	return 0;
}
