#include <stdio.h>
int main(){
	//C语言中 两个整数的换算结果只能是整数  小数部分会被直接丢掉（没有四舍五入） 10/3*3=9  
	//浮点数： 带小数点的数值，浮点数这个词的本意就是指小数点是浮动的，人们借用浮点数这个词表示所有带小数点的数
	//         double表示双精度浮点数  float表示单精度浮点数
	//改进方法 把foot 和inch 的数据类型改为float 或者inch/12 改为inch/12.0 
	
	printf("请分别输入身高的英尺和英尺，"
	     "如输入\"5 7\"表示5英尺7英寸:");
	
	float foot;
	float inch;
	
	scanf("%f %f", &foot, &inch);
	
	printf("升高是%f米。\n",((foot + inch / 12.0)*0.3048));
		
	return 0;
}
