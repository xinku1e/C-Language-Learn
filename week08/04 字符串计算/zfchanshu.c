#include <stdio.h>
#include <string.h>
/*
		�ַ������� string.h  #include <string.h> 
		strlen	strcmp	strcpy strcat	strchr strstr 
			strlen
		size_t strlen(const char* s);��const ��ʾ��֤���޸��ַ����� 
		����s���ַ������ȣ���������β��\0��
			strcmp
		int strcmp(const char* s1,const char* s2);
		�Ƚ������ַ�������
		0�� s1 == s2
		1�� s1 > s2
		-1: s1 < s2
			strcpy
		char* strcpy(char *restrict dst, const char *restrict src);
		��src���ַ���������dst
		restrict����src��dst���ص���c99��
		����dst
		Ϊ�������������
			strcat
		char* strcat(char *restrict s1, const char *restrict s2);
		��s2������s1�ĺ��棬�ӳ�һ�������ַ���
		����s1
		s1�������㹻�Ŀռ�
			��ȫ����
		strcpy��strcat�����ܳ��ְ�ȫ����
		���Ŀ�ĵ�û���㹻�Ŀռ䣿
			��ȫ�汾
		 char* strncpy(char *restrict dst, const char *restrict src, size_t n);
		 char* strncat(char *restrict s1, const char *restrict s2, size_t n);
		 char* strncpy(char *s1, const char *s2, size_t n);
		 	�ַ��������ַ�
		char *strchr(const char *s, int c);
		char *strrchr(const char *s, int c);�����ұ��ҹ����� 
		����null��ʾû�ҵ� 
*/ 
int main()
{
	char line[] = "Hello";
	printf("stringlen = %lu\n", strlen(line));
	printf("seizeof = %lu\n", sizeof(line));
	
	char s1[] ="abc";
	char s2[] ="abc ";
	printf("%d\n", strcmp(s1,s2));
 } 
