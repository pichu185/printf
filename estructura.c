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
		 {"u", print_unsigned},
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
int _functions(const char *format, format_t opciones[], va_list lista)
{
	int contador = 0, i, i2;

	for (i = 0; format[i] != '\0'; i++)
    	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				return (-1);
			}
			for (i2 = 0; opciones[i2].elegida != NULL; i2++)
			{
			    if (format[i + 1] == opciones[i2].elegida[0])
			    {
			       contador = contador + opciones[i2].llamar(lista);
			       break;
			    }
    			}
   			if (opciones[i2].elegida == NULL && format[i + 1] != ' ')
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
