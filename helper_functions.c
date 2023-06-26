#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * rev_string - rev string
 * @s: str to be rev
 * Return: a ptr to char
 */
char *rev_string(char *s)
{
	int lens;
	int hd;
	char tmp;
	char *des;

	for (lens = 0; s[lens] != '\0'; lens++)
	{}

	des = malloc(sizeof(char) * lens + 1);
	if (des == NULL)
		return (NULL);
	_memcpy(des, s, lens);
	for (hd = 0; hd < lens; hd++, lens--)
	{
		tmp = dess[lens - 1];
		des[lens - 1] = des[hd];
		des[hd] = tmp;
	}
	return (des);
}

/**
 * write_base - writes chars on stdout.
 * @str: str to p
 */
void write_base(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		_write_char(str[a]);
}

/**
 * base_len - calcul len of a no.
 * @num: no to be calcu
 * @base: base of calcu
 * Return: lens of the num
 */
unsigned int base_len(unsigned int num, int base)
{
	 unsigned int a;

	 for (a = 0; num > 0; a++)
	 {
		 num = num / base;
	 }
	 return (a);
}

/**
 * _memcpy - cp mem area
 * @dest: the dest for cp
 * @src: the src to cp
 * @n: number of bytes to cp
 * Return: ptr to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;
	for (a = 0; a < n; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
