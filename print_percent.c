#include "main.h"

/**
 * print_percent - prints a '%'
 * @ap: argument pointer
 * @output: String to write to
 * @count: Position in output to write to
 * Return: pointer to output
 */

void *print_percent(
		__attribute__((unused)) va_list ap,
		char *output,
		int *count
		)
{
	output[*count] = '%';
	(*count)++;
	return (output);
}
