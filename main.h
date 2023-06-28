#ifndef HEADER_FILE
#define HEADER_FILE

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct printf_funcs - struct
 * @printf_func_t: operator
 * @specifier_type: operator
 * printf_funcs_t: function
 */

struct search_t
{
        unsigned int (*func_ptr)(va_list);
        char* specifier_type;
};

typedef struct search_t search_t;

/* function prototypes */
int _printf(const char *format, ...);
int format_operator(__attribute__((unused))va_list lst);
int print_char(va_list);
int _write_char(char* c);
int parser(const char *format, search_t func_spcfr_array[], int arg_itr);
int print_str(va_list);
int print_unsigned_integer(va_list);
unsigned int base_len(unsigned int num, int base);
char *rev_string(char *s);
void write_base(char *str);
int hex_check(int num, char x);

/* helper options */
int print_number(unsigned int number);
int print_number_va_list(va_list);

int _write_char(char* c)
{
	int count = 0;
	while (*c != '\0')
	{
		write(1, c, 1); /* a single char */
		c++;
		count++;
	}

	return count;
}

#endif

