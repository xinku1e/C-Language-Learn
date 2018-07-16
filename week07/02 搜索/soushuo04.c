#include <stdio.h>

int search(int key, int a[], int length){
	int ret = -1;
	int left = 0;
	int right = length-1;
	while( right>=left ){
	int mid = (left+right)/2;
		if(key == a[mid]){
			ret = mid;
			break;
		}else if(key > a[mid]){
			left = mid + 1;
		}else{
			right = mid-1;
		}
	}
	return ret;
}

int main()
{
	printf("请输入一个数: ");
	int x;
	scanf("%d",&x);
	int a[] = {1,5,6,8,9,12,15,16,91,100};//数组a为排序好的数组
	int result = search(x, a, sizeof(a)/sizeof(a[0]));
	if(result == -1){
		printf("%d不在数组a中\n",x);
	}else{
		printf("%d在数组a中的第%d个\n",x,result+1);
	}
	return 0;
}
