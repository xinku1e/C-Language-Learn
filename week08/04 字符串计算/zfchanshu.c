#include <stdio.h>
#include <string.h>
/*
		字符串函数 string.h  #include <string.h> 
		strlen	strcmp	strcpy strcat	strchr strstr 
			strlen
		size_t strlen(const char* s);（const 表示保证不修改字符串） 
		返回s的字符串长度（不包括结尾的\0）
			strcmp
		int strcmp(const char* s1,const char* s2);
		比较两个字符串返回
		0： s1 == s2
		1： s1 > s2
		-1: s1 < s2
			strcpy
		char* strcpy(char *restrict dst, const char *restrict src);
		把src的字符串拷贝到dst
		restrict表明src和dst不重叠（c99）
		返回dst
		为了能链起代码来
			strcat
		char* strcat(char *restrict s1, const char *restrict s2);
		把s2拷贝到s1的后面，接成一个长的字符串
		返回s1
		s1必须有足够的空间
			安全问题
		strcpy和strcat都可能出现安全问题
		如果目的地没有足够的空间？
			安全版本
		 char* strncpy(char *restrict dst, const char *restrict src, size_t n);
		 char* strncat(char *restrict s1, const char *restrict s2, size_t n);
		 char* strncpy(char *s1, const char *s2, size_t n);
		 	字符串中找字符
		char *strchr(const char *s, int c);
		char *strrchr(const char *s, int c);（从右边找过来） 
		返回null表示没找到 
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
