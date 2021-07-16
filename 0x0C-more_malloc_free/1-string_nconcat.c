#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
 char *string_nconcat(char *s1, char *s2, unsigned int n)
 {
     unsigned int i =  0;
     unsigned int j = 0;
     unsigned  int k;
     char *b;
     if (s1 != NULL)
      {
     while (s1[i] != '\0')
     {
         i++;
     }
     }
     if (s1 != NULL)
     {
     while (s2[j] != '\0')
     {
         j++;
     }
     }
     b = malloc((i + n + 1) * sizeof(char));
     
     if (b == 0)
    {
        return (0);
    }
     if (n < j)
    {
         j = n; 
    }
     for (k = 0; k < i + j; k++)
    {
        if (k < i)
    {
         b[k] = s1[k];
    }
    else
    {
        b[k] = s2[k - i];
    }
    }
    return (b);
    
 }
