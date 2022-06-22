#include "main.h"
?
/**
 *_strlen_recursion - length of a string
 *@s: pointer block of memory to fill
 *Return: strlen_recursion
 */
int _strlen_recursion(char *s)
{
	char s[] = "Programming is fun";
	int i;

	for (i = 0; s[i] != '\0'; ++i);

	printf("Length of the string: %d", i);
	return (0);
}
