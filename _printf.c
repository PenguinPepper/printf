#include "main.h"

/**
 * _printf - function that produces output according to format
 * @format: is a character string which is composed of zero or more directives
 *
 * Description: write output to stdout, the standard output stream
 * Return: the number of characters printed (excluding
 * the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	/*
	 * function for printing formated data from
	 * variable argument list to stdout
	*/
	_vprintf(format, args);

	va_end(format);
}
