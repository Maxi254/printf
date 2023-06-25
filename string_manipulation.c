#include "main.h"

/**
 * print_reversed - reverses and prints str
 * #arg: Arg
 * Return: no of chars printed
 */
int print_reversed(va_list arg)
{
	int lens = 0;
	char *st = va_arg(arg, char *);
	if (st == NULL)
		return (-1);

	char *pt = rev_string(st);
	if (pt == NULL)
		return (-1);

	for (lens = 0; pt[lens] != '\0'; lens++)
		writer(pt[lens]);

	free(pt);
	return lens;
}

/**
 * rot13 - changes a str to rot13
 * @list: argument
 * Return: changed string
 */
int rot13(va_list list)
{
	int a, i;
	char *st = va_arg(list, char *);
	if (st == NULL)
		return -1;

	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char u[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; st[a] != '\0'; a++)
	{
		for (i = 0; i <= 52; i++)
		{
			if (st[a] == s[i])
			{
				writer(u[i]);
				break;
			}
		}

		if (i == 53)
			writer(st[a]);
	}

	return i;
}

