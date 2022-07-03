#include "main.h"

/**
 * print_string - s
 * @ap: argument pointer
 * @output: string
 * @count: strlen
 * Return: print ready string
 */

void *print_string(va_list ap, char *output, int *count)
{
	char *str = va_arg(ap, char *);
	int i;
	char *error = "(null)";

	if (str == NULL)
	{
		for (i = 0; error[i]; i++)
		{
			output[*count] = error[i];
			(*count)++;
		}
		return (output);
	}

	for (i = 0; str[i]; i++)
	{
		output[*count] = str[i];
		(*count)++;
	}

	return (output);
}
