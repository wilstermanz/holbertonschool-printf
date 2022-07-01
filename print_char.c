#include "main.h"

/**
 * print_char - fixes output for char printing
 * @ap: argument pointer
 * @output: print ready output
 * @count: position in string
 * Return: single char
 */

void *print_char(va_list ap, char *output, int *count)
{
	output[count] = va_arg(ap, int);
	(*count)++;
	return (output);
}
