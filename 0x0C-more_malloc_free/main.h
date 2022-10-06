#ifndef _MAIN_
#define _MAIN_
#include <stdio.h>
#include <stdlib.h>
int _putchar(char c);
int _strlen(char *s);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void _multiply(int *mul, char *str[]);
void rev_string(char *s);
void print_ans(int *mul);
#endif
