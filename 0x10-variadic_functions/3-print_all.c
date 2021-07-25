#include "variadic_functions.h"
#include "3-print_function.h"

/**
 * print_all - prints anything
 * @format: arguments
 * Return: void.
 */
void print_all(const char *const format, ...)
{
va_list argu;
int i = 0;
char *sep = "";

for_m form[] = {
	{"c", print_char},
	{"i", print_int},
	{"f", print_float},
	{"s", prin_string},
	{NULL, NULL},
};

va_start(argu, format);
if (format)
{
	while (format[i] != '\0')
	{
		int a = 0;

		while (form[a].b != NULL)
		{
			if (format[i] == *(form[a].b))
			{
				printf("%s", sep);
				form[a].wi(argu);
				sep = ", ";
			}
			a++;
		}
		i++;
	}
}
va_end(argu);
printf("\n");
}
