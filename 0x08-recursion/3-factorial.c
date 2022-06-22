#include "main.h"
/**
 *factorial - factorial of a given number
 *@n: pointer block of memory to fill
 *Return: factorial
 */
int factorial(int n)
{
int r;

r = factorial(1);
printf("%d\n", r);
r = factorial(5);
printf("%d\n", r);
r = factorial(10);
printf("%d\n", r);
r = factorial(-1024);
printf("%d\n", r);
return (0);
}
