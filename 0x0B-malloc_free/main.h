#ifndef _MAIN_
#define _MAIN_
#include <stdio.h>
#include <stdlib.h>
int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int _strlen(char *s);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
char *_substr(char *str, int start, int end);
int _countwords(char *str);
#endif
