#include <unistd.h>
#include "main.h"
/**
 * main - print task zero
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
