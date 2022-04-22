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
	char actualChar;
	va_list argsList;
	va_start(argsList, format);

	/*actualChar = *format;*/
	while ((actualChar = *format) != '\0')
	{
		/*character is not % so print it*/
		if (actualChar != '%')
		{
			_putchar(actualChar);
		}
		else /*characteur is % so check next character*/
		{
			/*switch on the next character*/
			
		}
		format++;
	}
	va_end(argsList);
	return (0);
}
