#include "main.h"
/**
 *_memset - fills memory with a constant byte
 * pointed to by s with the constant byte b
 * @s: memory area
 * @b: bytes
 * @n: member
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
		*ptr++ = b;
	return (s);
}

