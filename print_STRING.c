#include "main.h"

/**
 * print_STRING - prints string including unprintable characters
 * @ap: argument pointer
 * @output: string
 * @count: Where to add string
 */

void print_STRING(va_list ap, char *output, int *count)
{
	char *str = va_arg(ap, char *);
	int i, j, k, num;
	char *hexconverter = "0123456789ABCDEF";
	int decimals[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	int hex[2];

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
			for (j = 0; j < 2; j++)
			{
				hex[j] = num % 16;
				num /= 16;
			}
			for (j -= 1; j >= 0; j--)
			{
				for (k = 0; k <= 15; k++)
				{
					if (hex[j] == decimals[k])
					{
						output[*count] = hexconverter[k];
						(*count)++;
						break;
					}
				}
			}
		}
	}
}
