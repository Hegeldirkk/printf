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
	/*int i = 0;*/
	char actuelChar;
	va_list arg;
	va_start(arg, format);

	/*actuelChar = *format;*/
	while ((actuelChar = *format) != '\0')
	{
		format ++;
		if (actuelChar != '%')
		{
			putchar(actuelChar);
		}
	}
	va_end(arg);
	return (0);
}
