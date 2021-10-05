# _printf
```_printf``` is a custom implementation of the C programming function ```printf```. This project is an application of the C programming knowledge that [Holberton School](https://www.holbertonschool.com/) cohort 3 students have learned since starting the program on May 1, 2017.

**Prototype:** ```int _printf(const char *, ...);```

## Examples
**String**
* Input: ```_printf("%s\n", 'This is a string.');```
* Output: ```This is a string.```

**Character**
* Input: ```_printf("The first letter in the alphabet is %c\n", 'A');```
* Output: ```The first letter in the alphabet is A```

**Integer**
* Input: ```_printf("There are %i dozens in a gross\n", 12);```
* Output: ```There are 12 dozens in a gross```

**Decimal:**
* Input: ```_printf("%d\n", 1000);```
* Output:  ```1000```
## Project Requirements
* All files will be compiled on Ubuntu 14.04 LTS
* Programs and functions will be compiled with gcc 4.8.4 using flags -Wall -Werror -Wextra and -pedantic
* Code must follow the [Betty](https://github.com/holbertonschool/Betty/wiki) style
* Global variables are not allowed
* Authorized functions and macros:
  * ```write``` (man 2 write)
  * ```malloc``` (man 3 malloc)
  * ```free``` (man 3 free)
  * ```va_start``` (man 3 va_start)
  * ```va_end``` (man 3 va_end)
  * ```va_copy``` (man 3 va_copy)
  * ```va_arg``` (man 3 va_arg)
## Mandatory Tasks
- [x] Write function that produces output with conversion specifiers ```c```, ```s```, and ```%```.
- [x] Handle conversion specifiers ```d```, ```i```.
- [x] Create a man page for your function.
## Advanced Tasks
- [x] Handle conversion specifier ```b```.
- [x] Handle conversion specifiers ```u```, ```o```, ```x```, ```X```.
- [ ] Use a local buffer of 1024 chars in order to call write as little as possible.
- [x] Handle conversion specifier ```S```.
- [x] Handle conversion specifier ```p```.
- [ ] Handle flag characters ```+```, space, and ```#``` for non-custom conversion specifiers.
- [ ] Handle length modifiers ```l``` and ```h``` for non-custom conversion specifiers.
- [ ] Handle the field width for non-custom conversion specifiers.
- [ ] Handle the precision for non-custom conversion specifiers.
- [ ] Handle the ```0``` flag character for non-custom conversion specifiers.
- [x] Handle the custom conversion specifier ```r``` that prints the reversed string.
- [x] Handle the custom conversion specifier ```R``` that prints the rot13'ed string.
- [ ] All above options should work well together.
## File Descriptions
* **_printf.c:** - contains the  fucntion ```_printf```, which uses the prototype ```int _printf(const char *format, ...);```. The format string is composed of zero or more directives. See ```man 3 printf``` for more detail. **_printf** will return the number of characters printed (excluding the null byte used to end output to strings) and will write output to **stdout**, the standard output stream.
* **_putchar.c:** - contains the function ```_putchar```, which writes a character to stdout.
* **holberton.h:** - contains all function prototypes used for ```_printf```.
* **man_3_printf:** - manual page for the custom ```_printf``` function.
* **print_chars.c:** - contains the functions ```print_c```, ```print_s```, ```print_S```, and ```print_r``` which handle the conversion specifiers ```c```, ```s```, ```S```, and ```r```, respectively, as well as ```hex_print```, which prints a char's ascii value in uppercase hex
* **print_numbers.c:** - contains the functions ```print_i``` and ```print_d```, which handle the conversion specifiers ```i``` and ```d```, respectively
* **print_hex.c:** - contains the functions ```print_hex```, which prints an unsigned int in hexidecimal form, ```print_x```, ```print_X```, and ```print_p```, which handle the conversion specifiers ```x```, ```X```, and ```p```, respectively
* **print_unsigned_int.c:** - contains the functions ```print_u```, ```print_o```, and ```print_b```, which handle the conversion specifiers ```u```, ```o```, and ```b```, respectively
* **print_rot13.c** - contains the function ```print_R```, which handles the conversion specifier ```R```
More Info
Authorized functions and macros
write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)
Compilation
Your code will be compiled this way:
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)
Our main files will include your main header file (main.h): #include main.h
You might want to look at the gcc flag -Wno-format when testing with your _printf and the standard printf. Example of test file that you could use:
alex@ubuntu:~/c/printf$ cat main.c 
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
alex@ubuntu:~/c/printf$ ./printf
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
alex@ubuntu:~/c/printf$
We strongly encourage you to work all together on a set of tests
If the task does not specify what to do with an edge case, do the same as printf
Tasks
0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
mandatory
Write a function that produces output according to a format.

Prototype: int _printf(const char *format, ...);
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
c
s
%
You don’t have to reproduce the buffer handling of the C library printf function
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers
Repo:

GitHub repository: printf
   
1. Education is when you read the fine print. Experience is what you get if you don't
mandatory
Handle the following conversion specifiers:

d
i
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers
Repo:

GitHub repository: printf
   
2. Just because it's in print doesn't mean it's the gospel
mandatory
Create a man page for your function.

Repo:

GitHub repository: printf
File: man_3_printf
 
3. With a face like mine, I do better in print
#advanced
Handle the following custom conversion specifiers:

b: the unsigned int argument is converted to binary
alex@ubuntu:~/c/printf$ cat main.c
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("%b\n", 98);
    return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 main.c
alex@ubuntu:~/c/printf$ ./a.out
1100010
alex@ubuntu:~/c/printf$
Repo:

GitHub repository: printf
  
4. What one has not experienced, one will never understand in print
#advanced
Handle the following conversion specifiers:

u
o
x
X
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers
Repo:

GitHub repository: printf
   
5. Nothing in fine print is ever good news
#advanced
Use a local buffer of 1024 chars in order to call write as little as possible.

Repo:

GitHub repository: printf
   
7. My weakness is wearing too much leopard print
#advanced
Handle the following custom conversion specifier:

S : prints the string.
Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)
alex@ubuntu:~/c/printf$ cat main.c
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("%S\n", "Best\nSchool");
    return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 main.c
alex@ubuntu:~/c/printf$ ./a.out
Best\x0ASchool
alex@ubuntu:~/c/printf$
Repo:

GitHub repository: printf
  
6. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print
#advanced
Handle the following conversion specifier: p.

You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers
Repo:

GitHub repository: printf
   
8. The big print gives and the small print takes away
#advanced
Handle the following flag characters for non-custom conversion specifiers:

+
space
#
Repo:

GitHub repository: printf
   
9. Sarcasm is lost in print
#advanced
Handle the following length modifiers for non-custom conversion specifiers:

l
h
Conversion specifiers to handle: d, i, u, o, x, X

Repo:

GitHub repository: printf
   
10. Print some money and give it to us for the rain forests
#advanced
Handle the field width for non-custom conversion specifiers.

Repo:

GitHub repository: printf
   
11. The negative is the equivalent of the composer's score, and the print the performance
#advanced
Handle the precision for non-custom conversion specifiers.

Repo:

GitHub repository: printf
   
12. It's depressing when you're still around and your albums are out of print
#advanced
Handle the 0 flag character for non-custom conversion specifiers.

Repo:

GitHub repository: printf
   
13. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection
#advanced
Handle the - flag character for non-custom conversion specifiers.

Repo:

GitHub repository: printf
   
14. Print is the sharpest and the strongest weapon of our party
#advanced
Handle the following custom conversion specifier:

r : prints the reversed string
Repo:

GitHub repository: printf
   
15. The flood of print has turned reading into a process of gulping rather than savoring
#advanced
Handle the following custom conversion specifier:

R: prints the rot13'ed string
Repo:

GitHub repository: printf
   
16. *
#advanced
All the above options work well together.

Repo:

GitHub repository: printf

## Authors
[Musse Kalil](https://github.com/AyshaMuss) | 

[Mikiyas Asad](https://github.com/MikiyasA) | 
