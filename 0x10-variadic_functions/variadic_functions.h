#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>
#include <stdio.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
/**
 * struct print_op - Struct print_op
 * @c: The delimiter
 * @op: The callback function to perform an action
 */
typedef struct print_op
{
	char c;
	void (*op)(va_list *arg);
} print_t;
void print_all(const char *const format, ...);
void print_char(va_list *args);
void print_integer(va_list *args);
void print_float(va_list *args);
void print_string(va_list *args);
#endif
