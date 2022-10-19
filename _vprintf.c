#include "main.h"

/**
 * _vprintf - print formated data
 * @format: a character string
 * @args: list of arguments
 *
 * Return: 0
 */
void _vprintf(const char *format, va_list args)
{
	int state = 0;

	while(*format)
	{
		if(state == 0)
		{
			if(*format == '%')
				state == 1;
			else
				_putchar(*format);
		}
		else if(state == 1)
		{
		
		}
	format++;
	}
}
