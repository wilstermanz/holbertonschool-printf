#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

/**
 * struct d_type - struct d_type
 *
 * @formID: data format
 * @function: associated function
 */
typedef struct d_type
{
	char *formID;
	void (*function)(va_list, char *, int *);
} d_type;

int _printf(const char *format, ...);
int _putchar(char c);
void print_char(va_list, char *, int *);
void print_string(va_list, char *, int *);
void print_percent(va_list, char *, int *);
void print_integer(va_list, char *, int *);
void print_binary(va_list, char *, int *);
void print_reverse(va_list, char *, int *);
void print_ROT13(va_list, char *, int *);

#endif /* MAIN_H */
