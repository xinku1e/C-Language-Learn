#include <stdio.h>
int main()
{
	const int PASS = 60;
	int score;
	
	printf("������ɼ���");
	scanf("%d", &score);
	
	printf("������ĳɼ��ǣ�%d\n", score);
	if(score < PASS)
	    printf("���ź�������ɼ�û�м���\n");
	else
	    printf("ף���㣬�㼰����\n");
	printf("�ټ���");
	    
	
	return 0;
 } 
