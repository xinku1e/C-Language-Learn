#include <stdio.h>
int main()
{
	const int size = 3;
	int board[size][size];
	int i,j;
	int numbero;
	int numberx;
	int result = -1;  //½á¹ûÎª-1¶¼Ã»Ó® ½á¹ûÎª0ÔòoÓ® ½á¹ûÎª1ÔòxÓ® 
	for(i=0; i<size; i++){   //ÊäÈë 
		for(j=0; j<size; j++ ){
			scanf("%d", &board[i][j]);
		}
	}
	
	for(i=0; i<size && result == -1; i++){ //ÅÐ¶ÏÐÐ 
		numbero = numberx = 0;
		for(j = 0; j<size; j++){
			if( board[i][j] == 1){
				numberx++;
			}else{
				numbero++;
			}
		}
		if( numberx == size){
			result = 1; 
		}else if(numbero == size){
			result = 0;
		}
	}
	
	
	for(j=0; j<size && result == -1; j++){ //ÅÐ¶ÏÁÐ 
		numbero = numberx = 0;
		for(i = 0; i<size; i++){
			if( board[i][j] == 1){
				numberx++;
			}else{
				numbero++;
			}
		}
		if( numberx == size){
			result = 1; 
		}else if(numbero == size){
			result = 0;
		}
	}
	
	numbero = numberx = 0;
	for(i=0; i<size; i++){    	//ÅÐ¶ÏÖ÷¶Ô½ÇÏß 
		if(board[i][i] == 1){
			numberx++;
		}else{
			numbero++;
		}
		if(numberx == size){
			result = 1;
		}else if(numbero == size){
			result = 0;
		}
	}
	
	numbero = numberx = 0;
	for(i=0; i<size; i++){		//ÅÐ¶Ï¸±¶Ô½ÇÏß 
		if(board[i][size-i-1] == 1){
			numberx++;
		}else{
			numbero++;
		}
		if(numberx == size){
			result = 1;
		}else if(numbero == size){
			result = 0;
		}
	} 
	printf("%d",result);
	return 0;

 } 
 /*
 00 01 02   x o o 1 0 0
 10 11 12   o x x 0 1 1
 20 21 22	o o x 0 0 1
 */