#include <stdio.h>
int main (){
	//else���ŵ���������Ǹ�if ͨ�������ſ��Ըı� else������ 
	const int READY = 24;
	int code = 0;
	int count = 0;
	
	scanf("%d %d",&code,&count);
	if(code == READY)
	    if ( count < 20)
	        printf("һ������\n");
	    else
	        printf("�����ȴ�\n");
		
	return 0;
} 
/*
int main (){ 
	const int READY = 24;
	int code = 0;
	int count = 0;
	
	scanf("%d %d",&code,&count);
	if(code == ready){
	    if ( count < 20)
	        printf("һ������\n");
	    }
	    else
	        printf("�����ȴ�\n");
		
	return 0;
}  
*/
