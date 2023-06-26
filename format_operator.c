#include "main.h"
/**
 * printout_str - func that prints str
 * @lst : arg lis
 * Return: count of print char
 */

int printout_str(va_list lst)
{
	char *str;
	int itr1;

	/* okay */

	str = va_arg(lst, char *);
	if (str == NULL)
	{
		return (-1);
	}
	else
	{
		for (itr1 = 0; str[itr1] != '\0'; itr++)
		{
			_writer_char(str[itr1]);
		}
		return (itr1);
	}
}

/**
 * format_operator - func prints out operatror
 * @lst: arg list
 * Return: count of printed char
 */
int printout_char(va_list lst)
{
	_writer_char(va_arg(lst, int));
	return (1);
}

/**
 * print_integer - prints out int
 * @lst: argument list
 * Return: count of printed char
 */
int print_integer(va_list lst)
{
	int lens;
	lens = print_numbe(lst);
	return (lens);

}
/**
 * unsigned_interger - prints unsigned int
 * @lst: arg lsit
 * @Return: count of printed characters
 */
int unsigned_integer(va_list lst)
{
	unsigned int no;
	no = va_arg(lst, unsigned int);

	if (no == 0)
	{
		return (print_number(no));
	}
	if (no < 1)
	{
		return (-1);
	}
	return (print_number(no));
}
