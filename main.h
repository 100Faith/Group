#ifndef MAIN_H_
#define MAIN_H_

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * struct format - Structure name for functions
 * @function: function called after format specifier
 * @symbol: format specifier.
 */

struct format
{
	char *symbol;
	int (*function)(va_list);
};

/**
 * format_t - struct nickname
 */
typedef struct format format_t;

/* functions */
int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list arg);
void print_int(int num);
int (*get_func(char s))(va_list);
int print_s(va_list arg);
int print_int(va_list arg);
int print_i(va_list arg);
int print_binary(va_list arg);
int print_octal(va_list arg);
int print_unint(va_list arg);
int print_hex(va_list arg);
int print_hexlow(va_list arg);

#endif
