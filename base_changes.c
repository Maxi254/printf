#include "main.h"
#include <stdio.h>

/**
 * print_binary - changes b10 to binary
 * @list: Arg
 * Return: length
 */
int print_binary(va_list list)
{
	unsigned int num;
	int a, lens;
	char *str;
	char *rev_str;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (_write_char('0'));
	if (num < 1)
		return (-1);
	lens = base_len(num, 2);
	str = malloc(sizeof(char) * lens + 1);
	if (str = NULL)
		return (-1);

	for (a = 0; num > 0; a++)
	{
		if (num % 2 == 0)
			str[a] = '0';
		else
			str[a] = '1';
		num = num / 2;
	}
	str[a] = '\0';
	rev_str = rev_string(str);
	if (rev_str == NULL)
		return (-1);
	write_base(rev_str);
	free(str);
	free(rev_str);
	return (lens);
}

/**
 * print_octal - prints number in octal
 * @list: args
 * Return: number
 */
int print_octal(va_list list)
{
	unsigned int num;
	int lens;
	char *oct_rep;
	char *rev_str;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (_write_char('0'));
	if (num < 1)
		return (-1);
	lens - base_len(num, 8);
	oct_rep = malloc(sizeof(char) * lens + 1);
	if (oct_rep == NULL)
		return (-1);
	for (lens = 0; num > 0; lens++)
	{
		oct_rep[lens] = (num % 8) + 48;
		num = num / 8;
	}
	oct_rep[lens] = '\0';
	rev_str = rev_string(oct_rep);
	if (rev_str == NULL)
		return (-1);
	write_base(rev_str);
	free(oct_rep);
	free(rev_str);
	return (lens);
}

/**
 * print_hex - prints num in hex
 * @list: arg
 * Return: num of chars
 */
int print_hex(va_list list)
{
	unsigned int num;
	int lens;
	int re_n;
	char *hex_rep;
	char *rev_hex;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (_write_char('0'));
	if (num < 1)
		return (-1);
	lens = base_len(num, 16);
	hex_rep = malloc(sizeof(char) * lens + 1);
	if (hex_rep == NULL)
		return (-1);
	for (lens = 0; num > 0; lens++)
	{
		re_n = num % 16;
		if (re_n > 9)
		{
			re_n = hex_check(rem_num, 'x');
			hex_rep[lens] = re_n;
		}
		else
			hex_rep[len] = re_n + 48;
		num = num / 16;
	}
	hex_rep[lens] = '\0';
	rev_hex = rev_string(hex_rep);
	if (rev_hex == NULL)
		return (-1);
	write_base(rev_hex);
	free(hex_rep);
	free(rev_hex);
	return (lens);
}

/**
 * print_heX - prints hexa in upper
 * @list: args passed to func
 * Return: no of chars printed
 */
int print_heX(va_list list)
{
	unsigned int num;
	int lens;
	int re_n;
	char *hex_rep;
	char *rev_hex;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (_write_char('0'));
	if (num < 1)
		return (-1);
	lens = base_len(num, 16);
	hex_rep = malloc(sizeof(char) * lens + 1);
	if (hex_rep == NULL)
		return (-1);
	for (lens = 0; num > 0; lens++)
	{
		re_n = num % 16;
		if (re_n > 9)
		{
			re_n = hex_check(re_n, 'X');
			hex_rep[lens] = re_n;
		}
		else
			hex_rep[lens] = re_n + 48;
		num = num / 16;
	}
	hex_rep[lens] = '\0';
	rev_hex = rev_string(hex_rep);
	if (rev_hex == NULL)
		return (-1);
	write_base(rev_hex);
	free(hex_rep);
	free(rev_hex);
	return (lens);
}

/**
 * hex_check - fun calling it
 * @num: no to convert to letter
 * @x: hex func calling it
 * Return: ASCII value
 */
int hex_check(int num, char x)
{
	char *hex = "abcdef";
	char *Hex = "ABCDEF";

	num = num - 10;
	if (x == 'x')
		return (hex[num]);
	else
		return (Hex[num]);
	return (0);
}

