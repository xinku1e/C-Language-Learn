#include <stdio.h>
int search(int key, int a[], int length){
	int i;
	int ret = -1;
	for(i=0; i<length; i++){
		if(a[i]==key){
			ret = i;
			break;
		}
	}
	return ret;
}
int main()
{
	int a[] = {1,3,4,5,12,14,13,49};
	int x;
	scanf("%d",&x);
	int ret = search(x, a, sizeof(a)/sizeof(a[0]));
	if(ret == -1){
		printf("没有找到\n");
		}
	else{
		printf("%d在数组a中的第%d个\n", x, ret+1);
	}
	return 0;
 } 