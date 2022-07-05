#include "main.h"

/**
 * print_integer - adds an integer to a string
 * @ap: argument point with integer
 * @output: string to write in
 * @count: position in output to write in
 * Return: pointer to output
 */

void print_integer(va_list ap, char *output, int *count)
{
	int len = 1, i = 1;
	long int num = va_arg(ap, int);
	char *temp;

	if (num < 0)
	{
		num = num * -1;
		output[*count] = '-';
		(*count)++;
	}
	while (num / i >= 10)
	{
		i *= 10;
		len++;
	}
	temp = malloc(sizeof(char) * len);
	if (temp == NULL)
	{
		free(temp);
		exit(-1);
	}
	for (i = 0; i < len; i++)
	{
		temp[i] = (num % 10) + '0';
		num /= 10;
	}
	for (i -= 1; i >= 0; i--)
	{
		output[*count] = temp[i];
		(*count)++;
	}
	free(temp);
}
