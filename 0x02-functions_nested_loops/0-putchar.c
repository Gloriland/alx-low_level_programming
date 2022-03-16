#include "main.h"
/**
 * main - prints a string
 * Description: the string is "_putchar"
 *
 * Return: 0
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int count, gz;

	gz = sizeof(str) / sizeof(int);
	for (count = 0; count < gz; count++)

	{
		_putchar(str[count]);

	}

	_putchar('\n');
	return (0);
}
