#include "main.h"
/**
 * main - prints a string,followed by a new line
 * Return: always 0.
 */
void _puts_recursion(char *s)
{
if (*(s) != '\0')
{
_putchar(*s);
_puts_recursion(s + 1);
}
if (*(s) == '\0')
_putchar('\n');
}
