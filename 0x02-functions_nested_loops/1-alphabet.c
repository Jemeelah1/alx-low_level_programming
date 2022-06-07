#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
}
int main(void)
{
	_print_alphabet();
	return 0;
}
