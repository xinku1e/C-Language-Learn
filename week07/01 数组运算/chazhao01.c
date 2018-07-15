#include <stdio.h>

/***
找出key在数组a中的位置
@param key 要寻找的数字
@param a  要寻找的数组
@param length 数组a的长度
@return 如果找到 返回其在数组a 中的位置； 如果找不到则返回-1 
*/
int search(int key, int a[], int length); 

int main()
{
	int a[]= {2,6,5,8,4,23,44,623,5};
	int x;
	int result;
	printf("请输入一个数字\n");
	scanf("%d", &x);
	result = search(x, a, sizeof(a)/sizeof(a[0]));
	if(result == -1){
		printf("a数组中没有这个数\n");
	}else{
		printf("%d在数组中的第%d个\n", x, result);
	}
	
	return 0;
 } 
 
int search(int key, int a[], int length){
	int result = -1;
	int i;
	for(i=0; i<length; i++ ){
		if(key == a[i]){
			result = i;
			break;
		}
	}
	return result;
}