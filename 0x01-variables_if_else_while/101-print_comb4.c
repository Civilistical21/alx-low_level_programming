#include <stdio.h>
/**
 * main - print all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
        int n, m, l;
        for (n = 0; n <= 9; n++)
{
        for (m = 0; m <= 9; m++)
{
        for (l = 0; m <= 9; l++)
{
        if (l < m && m < n)
{
           putchar(n);
           putchar(m);
           putchar(l);
        if (n != 7 || m != 8)
{
           putchar(',');
           putchar(' ');
}
}
}
}
}
           putchar('\n');
return (0);
}
