#include "main.h"
#include <stdio.h>

/**
 * str_checker - checks format string and calls applicable functions
 * @ap: argument pointer
 * @format: pointer to format string to be searched
 * @output: buffer containing formatted string
 * @count: place in buffer
 * Return: pointer to output
 */

void *str_checker(
		va_list ap,
		const char *format,
		char *output,
		int *count
		)
{
	int i, j, success;
	d_type data_type[] = {
		{"c", print_char}, {"s", print_string},
		{"%", print_percent}, {"i", print_integer},
		{"d", print_integer}, {"b", print_binary},
		{NULL, NULL}
	};
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; data_type[j].formID; j++)
			{
				success = 0;
				if (format[i] == *(data_type[j]).formID)
				{
					data_type[j].function(ap, output, count);
					success = 1;
					break;
				}
			}
			if (success == 0)
			{
				output[*count] = format[i - 1];
				(*count)++;
				output[*count] = format[i];
				(*count)++;
			}
		}
		else
		{
			output[*count] = format[i];
			(*count)++;
		}
	}
	return (output);
}

/**
 * _printf - Prints a string with formatted data
 * @format: String containing data variables
 * Return: Number of characters printed
 */

int _printf(const char *format, ...)
{
	int count = 0;
	char *output;
	va_list ap;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	output = malloc(1024 * sizeof(int));
	if (output == NULL)
	{
		free(output);
		return (-1);
	}

	va_start(ap, format);

	str_checker(ap, format, output, &count);

	va_end(ap);

	write(1, output, count);
	free(output);
	return (count);
}
