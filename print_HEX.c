#include "main.h"

/**
 * print_HEX - Converts unsigned int to hexadecimal
 * and places in output string.
 *
 * @ap: argument pointer
 * @output: int to convert to hexadecimal
 * @count: Position in output to place hex string
 */

void print_HEX(va_list ap, char *output, int *count)
{
	int i, j, hex[8];
	unsigned int num = va_arg(ap, int);
	char *hexconverter = "0123456789ABCDEF";
	int decimals[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

	if (num == 0)
	{
		output[*count] = '0';
		(*count)++;
		return;
	}

	for (i = 0; num > 0; i++)
	{
		hex[i] = num % 16;
		num /= 16;
	}

	for (i -= 1; i >= 0; i--)
	{
		for (j = 0; j <= 15; j++)
		{
			if (hex[i] == decimals[j])
			{
				output[*count] = hexconverter[j];
				(*count)++;
				break;
			}
		}

	}
}
