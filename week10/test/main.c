#include "acllib.h"
#include <stdio.h> 
 
 int Setup()
 {
 	initConsole();
 	printf("输入宽度：");
 	int width;
 	scanf("%d", &width);
 	initWindow("test",DEFAULT,DEFAULT,width,width);
 	beginPaint();
 	setPenColor(BLUE);
	setPenWidth(1);
	setPenStyle(PEN_STYLE_DASHDOTDOT);
 	line(20,20,width,width);//线 
 	putPixel(100,150,RGB(255,0,0));//点 
 	endPaint();
 	return 0;
 }
