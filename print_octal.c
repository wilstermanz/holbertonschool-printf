#include "main.h"

/**
 * print_octal - Converts unsigned int to base 8
 * and places in output string.
 *
 * @ap: argument pointer
 * @output: int to convert to base 8
 * @count: Position in output to place new string
 */

void print_octal(va_list ap, char *output, int *count)
{
	int i, octal[11];
	unsigned int num = va_arg(ap, int);

	if (num == 0)
	{
		output[*count] = '0';
		(*count)++;
		return;
	}

	for (i = 0; num > 0; i++)
	{
		octal[i] = num % 8;
		num /= 8;
	}

	for (i -= 1; i >= 0; i--)
	{
		output[*count] = octal[i] + 48;
		(*count)++;
	}
}
