#include "main.h"

/**
 * parser - parses the format string and return count
 * @format: pointer
 * @func_spcfr_array: searches the table
 * @arg_itr: argument list
 * Return: count
 */
int parser(const char *format, search_t func_spcfr_array[], va_list arg_itr)
{
        size_t str_itr, struct_itr, result, value;

        value = 0;
        result = 0;

        if (format == NULL)
        {
                return (-1);
        }

        str_itr = 0;
        /* to repeat incoming string */
        for (; format[str_itr] != '\0'; str_itr++)
        {
                if (format[str_itr] == '%')
                {
                        struct_itr = 0;
                        for (; func_spcfr_array[struct_itr].specifier_type != NULL; struct_itr++)
                        {
                                if (format[str_itr + 1] == func_spcfr_array[struct_itr].specifier_type[0])
                                {
                                        value = func_spcfr_array[struct_itr].func_ptr(arg_itr);
                                        if (value == -1)
                                        {
                                                return (-1);
                                        }
					result += value;
                                        break;
                                }
                        }

                        if (func_spcfr_array[struct_itr].specifier_type == NULL && format[str_itr + 1] != ' ')
                        {
                                if (format[str_itr + 1] != '\0')
                                {
                                        writer(format[str_itr]);
                                        writer(format[str_itr + 1]);
                                        result += 2;
                                }
                                else
                                {
                                        return (-1);
                                }
                                str_itr++;
                        }
                }
                else
                {
                        writer(format[str_itr]);
                        result++;
                }
        }
        return (result);
}

     
