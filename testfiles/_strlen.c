#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: char
 * Return: string length
 */

int _strlen(char *s)
{
	int str = 0;

	while (*s++)
		str++;

	return (str);
}
