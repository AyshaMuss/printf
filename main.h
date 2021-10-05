#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

/**
* struct types_arguments - Struct op
*
* @t: The operator
* @f: The function associated
*/
typedef struct types_arguments
{
char t;
int (*f)(va_list va);
} types;
int _putchar(char c);
int _strlen(char *s);
int print_number(va_list va);
int binary(va_list va);
int print_unsigned(va_list va);
int hexa(va_list va);
int hexa_upper(va_list va);
int octal(va_list va);
int print_rot(va_list va);
char *malloc_str(char *str);
char *rot13(char *p);
int print_rev(va_list va);
int hexa_special(unsigned int c);
int stringhexa(va_list va);
int pointer(va_list va);
int hexa_pointer(unsigned long int c);
int _printf(const char *format, ...);
/**
 * struct funs - functions
 * @c: char
 * @f: funs
 */
struct funs
{
char c;
char *(*f)();
};

typedef struct funs filter;
int _printf(const char *format, ...);

char *print_c(va_list vars, char *buff, int *buff_size);
char *print_str(va_list vars, char *buff, int *buff_size);
char *print_d(va_list vars, char *buff, int *buff_size);

char *print_b(va_list vars, char *buff, int *buff_size);
char *print_u(va_list vars, char *buff, int *buff_size);
char *print_o(va_list vars, char *buff, int *buff_size);
char *print_x(va_list vars, char *buff, int *buff_size);
char *print_X(va_list vars, char *buff, int *buff_size);
char *pr(__attribute__((unused)) va_list vars, char *buff, int *buff_size);

char *print_p(va_list vars, char *buff, int *buff_size);
char *print_r(va_list vars, char *buff, int *buff_size);
char *print_rot13(va_list vars, char *buff, int *buff_size);
char *print_S(va_list vars, char *buff, int *buff_size);

void print_buff(char *, int);
filter *hand();
void rev_string(char *s);
void *_calloc(unsigned int nmemb, unsigned int size);
char *_itoa(unsigned int num, int base);
char *adress(long int num, int base);
char *string_toupper(char *s);
#endif

