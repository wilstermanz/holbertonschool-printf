#include "main.h"

/**
 * print_binary - Converts unsigned int to binary
 * and places in output string.
 *
 * @ap: argument pointer
 * @output: int to convert to binary
 * @count: Position in output to place binary string
 */

void print_binary(va_list ap, char *output, int *count)
{
	int i, binary[32];
	unsigned int num = va_arg(ap, int);

	for (i = 0; num > 0; i++)
	{
		binary[i] = num % 2;
		num /= 2;
	}

	for (i -= 1; i >= 0; i--)
	{
		output[*count] = binary[i] + 48;
		(*count)++;
	}
}
