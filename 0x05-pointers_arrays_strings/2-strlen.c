#include "main.h"
/**
 * _strlen - return length of a string
 * @s: check character
 * Return: 0
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}

