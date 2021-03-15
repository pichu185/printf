#include "holberton.h"

/**
*print_char - print a char
*@lista: arguments
*Return: numbers of characters printed
*
*
*/

int print_char(va_list lista)
{
	_putchar(va_arg(lista, int));
	return (1);
}

/**
 * print_string - print string received
 * @lista: arguments
 * Return: numbers of characters printed
 */
int print_string(va_list lista)
{
	int i;
	char *s;

	s = va_arg(lista, char*);

	if (s == NULL)
	{
		s = "(null)";
		}

		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
			}

			return (i);
}

/**
 * print_porcentaje - print percent symbol
 * @lista: arguments
 * Return: numbers of characters printed
 */
int print_porcentaje(va_list lista)
{
	if (lista != NULL)
	{
	}
	_putchar('%');
	return (1);
}

/**
 * print_int - print integers
 * @lista: arguments passed
 * Return: number of characters printed
 */
int print_int(va_list lista)
{
	int i, div = 1, largo = 0;
	unsigned int num;

	i = va_arg(lista, int);
	if (i < 0)
	{
		largo = largo + _putchar('-');
		num = i * -1;
	}
	else
	{
		num = i;
	}

	while (num / div > 9)
	{
		div *= 10;
	}

	while (div != 0)
	{
		largo = largo + _putchar('0' + (num / div));
		num %= div;
		div /= 10;
	}
	return (largo);
}