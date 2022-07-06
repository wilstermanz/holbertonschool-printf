#include "main.h"

/**
 * print_ROT13 - Prints string in ROT13
 * @ap: argument pointer
 * @output: buffer in which to place ROT13 string
 * @count: Location in output to place ROT13 string
 */

void print_ROT13(va_list ap, char *output, int *count)
{
	char *alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *nycunorg = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *str = va_arg(ap, char *);
	int i, j, success;

	for (i = 0; str[i]; i++)
	{
		success = 0;
		for (j = 0; alphabet[j]; j++)
		{
			if (str[i] == alphabet[j])
			{	success = 1;
				output[*count] = nycunorg[j];
				(*count)++;
				break;
			}
		}
		if (success == 0)
		{
			output[*count] = str[i];
			(*count)++;
		}
	}
}
