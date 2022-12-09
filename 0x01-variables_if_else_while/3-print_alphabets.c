#include <stdio.h>
/**
 * main - print lowercase alphabets followed by uppercase then new line *
 *
 * Return: 0
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
			putchar('\n');
			return (0);
}
