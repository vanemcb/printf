#include "holberton.h"

/**
 * p_char - function that prints a character
 * @input_arg: input character
 * @size: pointer to the full string size counter
 */
void p_char(va_list input_arg, int *size)
{
	char c = va_arg(input_arg, int);

	write(1, &c, 1);
	(*size)++;
}

/**
 * p_string - function that prints an string
 * @input_arg: input string
 * @size: pointer to the full string size counter
 */
void p_string(va_list input_arg, int *size)
{
	char *str = va_arg(input_arg, char *);
	int n = 0;

	if (str == NULL)
		str = "(null)";
	while (str[n] != '\0')
		n++;
	write(1, str, n);
	*size = *size + n;
}

/**
 * p_percent - function that prints a percentage
 * @input_arg: input character
 * @size: pointer to the full string size counter
 */
void p_percent(va_list input_arg, int *size)
{
	char p = '%';

	(void)input_arg;
	write(1, &p, 1);
	(*size)++;
}

/**
 * p_int - function that prints a number
 * @input_arg: input number
 * @size: pointer to the full string size counter
 */
void p_int(va_list input_arg, int *size)
{
	int num, i, no_print_zero = 0, x = 1000000000;
	int n = va_arg(input_arg, int);
	char n2;

	if (n == 0)
	{
		n = '0';
		write(1, &n, 1);
		(*size)++;
	}
	else
	{
		for (i = 0; i <= 9; i++)
		{
			num = n / x;
			n = n % x;
			if (num != 0)
				no_print_zero = 1;
			if (num < 0 && no_print_zero == 1)
			{
				num = -num;
				n = -n;
				write(1, "-", 1);
				(*size)++;
			}
			if (no_print_zero == 1)
			{
				n2 = num + '0';
				write(1, &n2, 1);
				(*size)++;
			}
			x = x / 10;
		}
	}
}
