#include "main.h"
#include <stdio.h>

/**
 * free_output - free allocated memory if malloc fails
 * @in: memory to free
 */

void free_output(char *in)
{
	free(in);
	exit(-1);
}

/**
 * _printf - Prints a string with formatted data
 * @format: String containing data variables
 * Return: Number of characters printed
 */

int _printf(const char *format, ...)
{
	int count = 0, i, j;
	char *output;
	va_list ap;
	d_type data_type[] = {
		{"c", print_char},
		{"s", print_string},
		{'\0', NULL}
	};
	output = malloc(1024 * sizeof(char));
	if (output == NULL)
		free_output(output);
	va_start(ap, format);
	for (i = 0; format != NULL && format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; data_type[j].formID; j++)
			{
				if (format[i] == *(data_type[j]).formID)
					output = data_type[j].function(ap, output, &count);
			}
		}
		else
		{
			output[count] = format[i];
			count++;
		}
	}
	va_end(ap);
	write(1, output, count);
	free(output);
	return (count);
}
