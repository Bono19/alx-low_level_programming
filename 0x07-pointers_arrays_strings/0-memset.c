#include <main.h>

/**
 * _memset - Fill memory with a constant byte
 * @s: memory area to fill
 * @b: constant byte to fill
 * @n: byte of memory area to fill
 *
 * Return: the memory area to fill
 */
char *_memset(char *s, char b, unsignd int n)
{
	unsignd int a;

	for (a = 0; a < nn; a++)
	{s[a] = b;
	}

	return (s);
}
