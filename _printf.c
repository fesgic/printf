#include "main.h"

/**
 * _printf - formatted print
 * @format: character string
 *
 * Return: number of chars printed
 */
int _printf(const char *format, ...)
{
	va_list string;
	int sum;
	int *first;

	sum = 0;
	/* j = 0; */

	if (format == NULL)
	{
		return (0);
	}
	va_start(string, format);
	first = (int *)malloc(sizeof(first));
	if (first == NULL)
		return (0);
	*first = va_arg(string, int);
	while (*first++)
	{
		_putchar(*(first) + '0');
	}
	/*
	for (i = 0; i < format; i++)
	{
		while(va_arg(string, char)[i] != '\0')
		{

			_putchar(va_arg(string, char)[i]);
			j++;
		}
		sum += j;
		j = 0;
	}*/
	va_end(string);
	free(first);
	return (sum);

}
