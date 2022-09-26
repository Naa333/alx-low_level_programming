#include "main.h"

#include <unistd>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1, -1 error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
