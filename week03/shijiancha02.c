#include <stdio.h>
int main() {
	int hour1, minute1;
	int hour2, minute2;

	scanf("%d %d", &hour1, &minute1);
	scanf("%d %d", &hour2, &minute2);

	int in = hour2 - hour1;
	int im = minute2 - minute1;

	if(im<0) {
		im = 60 + im;
		in--;
	}

	printf("Ê±¼ä²îÊÇ%dÐ¡Ê±%d·Ö\n", in, im);

	return 0;
}
