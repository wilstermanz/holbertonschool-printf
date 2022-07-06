#include "main.h"

/**
 * hex_convert - converts decimal to hex
 * @output:
 * @count:
 */

void hex_convert(char *output, int *count, int num)
{
	char *hexconverter = "0123456789ABCDEF";
	int decimals[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	int hex[2];
	int i, j;

	for (i = 0; i < 2; i++)
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

/**
 * print_STRING - prints string including unprintable characters
 * @ap: argument pointer
 * @output: string
 * @count: Where to add string
 */

void print_STRING(va_list ap, char *output, int *count)
{
	char *str = va_arg(ap, char *);
	int i, num;

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 32 && str[i] < 127)
		{
			output[*count] = str[i];
			(*count)++;
		}
		else
		{
			num = str[i];
			output[*count] = 92;
			(*count)++;
			output[*count] = 'x';
			(*count)++;
			hex_convert(output, count, num);
		}
	}
}
