#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
/**
 * struct print - structure for printing various types
 * @t: type to print
 * @f: function to print
 */
typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

int _printf(const char *format, ...);
void print_strings(const char *separator, const unsigned int n, ...);
char *rot13(char *s);
int _putchar(char c);
void rev_string(char *s);
int _puts(char *str);
void revstr(char *str1);
int printf(const char *format, ...);
void print_all(const char * const format, ...);
float newPrecision(float n, float i);

void print_strings(const char *separator, const unsigned int n, ...);
#endif

