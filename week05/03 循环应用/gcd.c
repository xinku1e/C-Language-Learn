/*ö�ٷ�
1. ��tΪ2
2. ���u��v���ܱ�t��������������t
3. t+1���ظ��ڶ�����ֱ��t ����u��v��
4.��ô���������µ����Ŀ���ͬʱ���� u ��v �ľ���gcd 

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
	printf("%d��%d�����Լ��Ϊ%d\n",a,b,gcd);
	return 0;
 } 
