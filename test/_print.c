#include "main.h"
/**
 *_printf - printf
 *@format: const char pointer
 *Description: this functions implement some functions of printf
 *Return: num of characteres printed
 */
int _printf(const char *format, ...)
{
	/* Initialisation de variable et de la struture var_list */
	/*int countper = 0;*/
	int i, j;
	char *str;
	va_list argsList;
	va_start(argsList, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			switch(format[i + 1])
			{
				case 'c':
					str = (char*)va_arg(argsList, int);
					_putchar(str);
				break;

				case 's':
					j=0;
					str = va_arg(argsList, char *);
					while(str[j] != '\0')
					{
						_putchar(str[j]);
						j++;
					}
				break;

				case '%':
					_putchar('%');
				break;
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
	}
	va_end(argsList);
	return (0);
}
