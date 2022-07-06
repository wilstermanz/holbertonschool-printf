#include "main.h"

/**
 * print_char - fixes output for char printing
 * @ap: argument pointer
 * @output: print ready output
 * @count: position in string
 * Return: single char
 */

void print_char(va_list ap, char *output, int *count)
{
	if (ap == NULL || output == NULL)
		return;

	output[*count] = (char)va_arg(ap, int);
	(*count)++;
}
