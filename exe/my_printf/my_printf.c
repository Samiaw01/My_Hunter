/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** display
*/

#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include "my.h"

static array_t func[] = {
    {'d', put_a_number},
    {'s', put_a_string},
    {'c', put_a_char},
    {'o', put_a_octal},
    {'i', put_a_number},
    {'S', put_a_s},
    {0, 0}
};

void mores(char *str, va_list ap, int i)
{
    for (int a = 0; func[a].c; a += 1) {
        if (str[i] == func[a].c)
            func[a].ptr(ap);
    }
}

int my_printf(char *str, ...)
{
    va_list ap;
    va_start(ap, str);
    int i = 0;

    for (; str[i]; i += 1) {
        if (str[i] == '%' && str[i + 1] != '\0') {
            i += 1;
            mores(str, ap, i);
        }
        else
            my_putchar(str[i]);
    }
    va_end(ap);
    return (0);
}