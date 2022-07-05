#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Char val 97: [%c]\n", 97);
    printf("Char val 97: [%c]\n", 97);
    _printf("Char val 255: [%c]\n", 255);
    printf("Char val 255: [%c]\n", 255);
    _printf("Char val 256: [%c]\n", 256);
    printf("Char val 256: [%c]\n", 256);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    _printf("NULL String:[%s]\n", NULL);
    printf("NULL String:[%s]\n", NULL);
    _printf("Max int = %d, Min int = %d\n", INT_MAX, INT_MIN);
    printf("Max int = %d, Min int = %d\n", INT_MAX, INT_MIN);
    _printf("NULL char: %c\n", NULL);
    printf("NULL char: %c\n", NULL);
    printf("Error value of _printf for NULL char: %i\n", _printf("%c", NULL));
    printf("Error value of printf for NULL char: %i\n", printf("%c", NULL));
    _printf("Arguments but nowhere to put them\n", 12, "hello");
    printf("Arguments but nowhere to put them\n", 12, "hello");
    printf("Error value of _printf: %d\n", _printf(NULL));
    printf("Error value of printf: %d\n", printf(NULL));
    _printf("NULL Character:[%c]\n", '\0');
    printf("NULL Character:[%c]\n", '\0');
    _printf("Zero length string: %s\n", "");
    printf("Zero length string: %s\n", "");
    _printf("");
    printf("");
    return (0);
}
