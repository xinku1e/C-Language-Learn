#include <stdio.h>
int main()
{
	/*  �㷨 
	     ��Ҫ����n���ڵ�������
	1.��xΪ2
	2.��2x��3x��4x��ֱ��ax<n�������Ϊ������
	3.��xΪ��һ��û�б����Ϊ�������������ظ�2��ֱ�����е������������ 
	*/
	/*   ��Ҫ����n���ڵ�������
	1.����prime[n]����ʼ������Ԫ��Ϊ1��prime[x]Ϊ1��ʾx������ 
	2.��x=2 
	3. ���x������������ڣ�i=2��x*i<n; i++����prime[i*x] = 0
	4.��x++�� ���x<n���ظ�3��������� 
	*/
	const int maxNumber = 10000;
	int isPrime[maxNumber];
	int i;
	int x;
	for(i=0; i<maxNumber; i++){
		isPrime[i] = 1;
	}
	for(x=2; x<maxNumber; x++){
		if(isPrime[x]){
			for(i=2; i*x<maxNumber;i++){
				isPrime[i*x] = 0;
			}
		}
	}
	for(i=2; i<maxNumber; i++){
		if(isPrime[i]){
			printf("%d\t",i);
		}
	}
	printf("\n");
	return 0;
}
