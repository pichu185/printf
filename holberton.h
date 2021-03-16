#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _printf(const char *format, ...);

/**
 * struct format - This is a typedef struct.
 * @elegida: Pointer type char.
 * @llamar: Pointer to call the function.
 */
typedef struct format
{
	char *elegida;
	int (*llamar)();
} form_t;

int _printf(const char *format, ...);
int _functions(const char *format, form_t opciones[], va_list lista);
int print_string(va_list lista);
int print_char(va_list lista);
int _putchar(char c);
int print_int(va_list lista);
int print_porcentaje(va_list lista);
int print_unsigned(va_list lista);
int print_octal(va_list lista);
int print_binary(va_list lista);
#endif
