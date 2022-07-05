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
	char c = va_arg(ap, int);

	if (!c || !*output)
		return;

	output[*count] = c;
	(*count)++;
}
