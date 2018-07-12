#include <stdio.h>
int main (){
	//else跟着的是最近的那个if 通过大括号可以改变 else的意义 
	const int READY = 24;
	int code = 0;
	int count = 0;
	
	scanf("%d %d",&code,&count);
	if(code == READY)
	    if ( count < 20)
	        printf("一切正常\n");
	    else
	        printf("继续等待\n");
		
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
	        printf("一切正常\n");
	    }
	    else
	        printf("继续等待\n");
		
	return 0;
}  
*/
