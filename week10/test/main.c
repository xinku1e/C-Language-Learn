#include "acllib.h"
#include <stdio.h> 
 
 int Setup()
 {
 	initConsole();
 	printf("�����ȣ�");
 	int width;
 	scanf("%d", &width);
 	initWindow("test",DEFAULT,DEFAULT,width,width);
 	beginPaint();
 	setPenColor(BLUE);
	setPenWidth(1);
	setPenStyle(PEN_STYLE_DASHDOTDOT);
 	line(20,20,width,width);//�� 
 	putPixel(100,150,RGB(255,0,0));//�� 
 	endPaint();
 	return 0;
 }
