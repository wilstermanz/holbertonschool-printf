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
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"i", print_integer},
		{"d", print_integer},
		{'\0', NULL}
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
					output = data_type[j].function(ap, output, count);
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

	if (format)
		output = malloc(1024);

	if (!output || !format)
		return (-1);

	va_start(ap, format);

	output = str_checker(ap, format, output, &count);

	va_end(ap);

	write(1, output, count);
	free(output);
	return (count);
}
