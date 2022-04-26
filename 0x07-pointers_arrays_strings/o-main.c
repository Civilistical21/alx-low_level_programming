/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}
i = 0;
  while (i < size)
    {
      if (i % 10)
	{
	  printf(" ");
	}
      if (!(i % 10) && i)
	{
	  printf("\n");
	}
      printf("0x%02x", buffer[i]);
      i++;
    }
  printf("\n");
}

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int main(void)
{
  char buffer[98] = {0x00};


char buffer[98] = {0x00};

simple_print_buffer(buffer, 98);
  _memset(buffer, 0x01, 95);
  printf("-------------------------------------------------\n");
  simple_print_buffer(buffer, 98);    
  return (0);
}
