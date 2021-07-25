#ifndef _3_PRINT_FUNCTION_H
#define _3_PRINT_FUNCTION_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_char - char
 * @argu: arguments
 * Return: void.
 */
void print_char(va_list argu)
{
    printf("%c", va_arg(argu, int));
}

/**
 * print_int - int
 * @argu: arguments
 * Return: void.
 */
void print_int(va_list argu)
{
    printf("%d", va_arg(argu, int));
}

/**
 * print_float - float 
 * @argu: arguments
 * Return: void.
 */
void print_float(va_list argu)
{
    printf("%f", va_arg(argu, double));
}

/**
 * print_string - string
 * @ptr: arguments
 * Return: void. 
 */
void prin_string(va_list argu)
{
    char *h;
    h = va_arg(argu, char *);

    if (h == NULL)
    {
        printf("(nil)");
        return;
    }
    else
    {
        printf("%s", h);
    }
}
#endif