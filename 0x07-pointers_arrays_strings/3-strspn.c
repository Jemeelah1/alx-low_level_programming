#include "main.h"
/**
 *_strspn - Locates a character in a string
 *@s: This is the main C string to be scanned.
 *@accept: This is the string containing the list of characters to match in s
 *Return: return count
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
				{
					c++;
				}
			}
			else
			{
				return (c);
			}
		}
	}
	return (c);
}
