#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - generates output accordin to f.
 * @format: string
 * Return: num of char printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					count += _write_char(va_arg(args, int));
					break;
				case 's':
					count += _write_str(va_arg(args, char *));
					break;
				case '%':
					count += _write_char('%');
					break;
				default:
					count += _write_char('%');
					count += _write_char(*format);
					break;
			}
		}
		else
		{
			count += _write_char(*format);
		}

		format++;
	}
	va_end(args);
	return (count);
}
   

