#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The charactr to point
 *
 * Return: On success 1.
 * One error, -1 is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
