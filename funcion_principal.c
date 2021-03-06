#include "holberton.h"
/**
 * _printf - print data
 * @format: string received
 * Return: Return number of charachetrs printed
 */
int _printf(const char *format, ...)
{
	va_list lista;
	int contador = -1;
	form_t opciones[] = {
		 {"c", print_char},
		 {"s", print_string},
		 {"i", print_int},
		 {"d", print_int},
		 {"%", print_porcentaje},
		 {NULL, NULL}
	};

if (format != NULL)
{
	va_start(lista, format);
	contador = _functions(format, opciones, lista);
	va_end(lista);
}
return (contador);
}
/**
 * _functions - print a characters and call other functions
 * @format: string received
 * @opciones: structure of options
 * @lista: arguments
 * Return: number of characters printed
 */
int _functions(const char *format, form_t opciones[], va_list lista)
{
	int contador = 0, i, j;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				return (-1);
			}
			for (j = 0; opciones[j].elegida != NULL; j++)
			{
				if (format[i + 1] == opciones[j].elegida[0])
				{
					contador = contador + opciones[j].llamar(lista);
					break;
				}
			}
			if (opciones[j].elegida == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
			{
				_putchar(format[i]);
				_putchar(format[i + 1]);
				contador = contador + 2;
			}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			contador = contador + 1;
		}
	}
	return (contador);
}
