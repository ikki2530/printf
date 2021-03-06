#include "holberton.h"
/**
 * _printf - prints int, char, string, float
 * @format: string to print
 * Return: int value with string length
 */
int _printf(const char *format, ...)
{
	int i = 0, len = 0, ret = 0;

	va_list(list);
	va_start(list, format);
	if (format == '\0')
	{
		va_end(list);
		return (-1);
	}
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			ret = find(&format[i + 1], list);
			if (ret != 0)
			{
				len = len + ret;
				 i = i + 1;
			}
			else
			{
				 print_char(format[i]);
				 len++;
			}
			if (ret == -2)
				len = len + 2;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			len = len + print_char(format[i]);
			i++;
		}
		else
			len = len + print_char(format[i]);
	}
	va_end(list);
	return (len);
}
