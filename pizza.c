#include <stdio.h>

int main(void)
{
	char *pizza = "it is pizza time";
	int i = 0;

	while (pizza[i] != '\0')
	{
		putchar(pizza[i]);
		putchar(10);
		i++;
	}
}
