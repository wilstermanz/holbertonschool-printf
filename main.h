#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>

/**
 * struct format - struct format
 *
 * @format: data format
 * @func: associated function
 */
typedef struct format
{
	char *formID;
	void *(*function)(va_list, char *);
} format;

int _printf(const char *format, ...);
int _putchar(char c);
void *print_char(va_list, int *);
void *print_string(va_list, int *);
void *print_percent(va_list, int *);

#endif
