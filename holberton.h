#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
void p_char(va_list input_arg, int *size);
void p_string(va_list input_arg, int *size);
void p_int(va_list input_arg, int *size);
int selec(char c_selec);

/**
 *struct identifier - strutct of the formmated types and functions
 *@s_id: format type
 *@func: functions
 */

typedef struct identifier
{
	char *s_id;
	void (*func)(va_list, int*);
} ident;

#endif
