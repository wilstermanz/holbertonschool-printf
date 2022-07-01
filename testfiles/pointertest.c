#include <stdio.h>

void change(int *i)
{
	i[0] = 200;
}

int main(void)
{
	int i[1];

	i[0] = 0;

	printf("i = %i\n", i[0]);

	change(i);

	printf("i = %i\n", i[0]);

	return (0);
}
