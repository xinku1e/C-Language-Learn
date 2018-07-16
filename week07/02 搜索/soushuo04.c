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
	printf("������һ����: ");
	int x;
	scanf("%d",&x);
	int a[] = {1,5,6,8,9,12,15,16,91,100};//����aΪ����õ�����
	int result = search(x, a, sizeof(a)/sizeof(a[0]));
	if(result == -1){
		printf("%d��������a��\n",x);
	}else{
		printf("%d������a�еĵ�%d��\n",x,result+1);
	}
	return 0;
}
