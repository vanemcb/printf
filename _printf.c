#include "holberton.h"

/**
 * _printf - Write a function that produces output according to a format.
 * @format: is the input text that contains the format specifiers.
 * Return: the number of characters printed on the screen
 * or -1 in case of error.
 */
int _printf(const char *format, ...)
{
	int x, y, count = 0, *size;
	va_list arg;

	size = &count;
	ident t_selec[] = {
		{"c", p_char},
		{"s", p_string},
		{"i", p_int},
		{"d", p_int},
		{NULL, NULL}
	};
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(arg, format);
	for (x = 0; format[x] != '\0' && format != NULL; x++)
	{
		if (format[x] == '%')
		{
			for (y = 0; t_selec[y].s_id != NULL; y++)
				if (t_selec[y].s_id[0] == format[x + 1])
					t_selec[y].func(arg, size);
			x = x + 1;
		}
		else
			write(1, &format[x], 1);
		(*size)++;
	}
	va_end(arg);
	return (*size);
}
