#include "holberton.h"



/**

 * _puts - print a string

 * @str:pointer char

 * return:void

 *i/

void _puts(char *str)

{

	int i;



	for (i = 0; str[i] != '\0'; i++)

	{

		putchar(str[i]);

	}

putchar('\n');

return;

}
