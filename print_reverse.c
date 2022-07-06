#include "main.h"

/**
 * print_reverse - Prints the reverse of a string
 * @ap: argument pointer
 * @output: location to print reversed string
 * @count: position in output to place reversed string
 */

void print_reverse(va_list ap, char *output, int *count)
{
	int i = 0;
	char *str = va_arg(ap, char *);

	while (str[i])
		i++;

	for (i -= 1; i >= 0; i--)
	{
		output[*count] = str[i];
		(*count)++;
	}
}
