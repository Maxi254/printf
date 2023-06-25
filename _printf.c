#include "main.h"
/**
 * _printf - func that prints formttd str to std/O
 * @format: I/str
 * Return: total char to std/O
 */

int _printf(const char *format, ...)
{
        int print_count;
        va_list arg_itr;

        /* searches table */
        search_t function_array[] =
        {
                {print_char, "c"},
                {print_str, "s"},
                {format_operator, "%"},
                {print_integer, "i"},
                {print_integer, "d"},
                {print_unsigned_integer, "u"},
                {NULL, NULL}
        };
          
        if (format == NULL)
        {
                return (-1);
        }    
      
        va_start(ar_i, format);

        /* we call parser */ 
        print_count = parser(format, function_array, arg_itr);

        va_end(arg_itr); 
    
        return (print_count);
}   

