#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format: The format that indicates the type
 * @...: Unnamed arguments
 *
 * Return: void
 */
void print_all(const char *const format, ...)
{
	char ops[] = "cifs\0";
	int i = 0, j;
	va_list ap;
	char c;
	char *str;

	va_start(ap, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (ops[j] != format[i] && ops[j] != '\0')
			j++;
		c = ops[j];
		switch (c)
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			str = va_arg(ap, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			break;
		}
		if (c != '\0' && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
