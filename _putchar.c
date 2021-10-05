#include <unistd.h>

/**
 * _putchar - fuction to to return write
 * @c: is a charater to the function
 *
 * Return: returns write.
**/

int _putchar(char c)
{
return (write(1, &c, 1));
}
