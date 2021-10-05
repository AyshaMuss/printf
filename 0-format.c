#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
/**
A conversion specification is a complete unit such as %*13lf.
The (format) conversion specifier is the last letter, such as f in the example above
Each conversion specification is introduced by the character %. After the %, the following appear in sequence:

An optional assignment-suppressing character *.
An optional decimal integer greater than zero that specifies the maximum field width (in characters).
An optional length modifier that specifies the size of the receiving object.
A conversion specifier character that specifies the type of conversion to be applied.
**/

int _printf(const char *format, ...)
{
unsigned int i = 0, j = 0;
char *str;
va_list ls;
va_start(ls, format);
while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(ls, int));
break;
case 'f':
printf("%", va_arg(ls, double));
break;
case 's':
str = va_arg(ls, char*);
if (str == NULL)
str = "(nil)";
printf("%s", str);
break;
}
j = i + 1;
while (format[j] && (format[j] == 'c' || format[j] == 'i' || format[j] == 'f' || format[j] == 's'))
{
printf(", ");
break;
}
i++;
}
printf("\n");
va_end(ls);
return (0);
}
