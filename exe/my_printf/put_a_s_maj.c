/*
** EPITECH PROJECT, 2020
** My put nbr
** File description:
** Put octal
*/

#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"

char *add_0(char *str)
{
    int len = my_strlen(str);
    char *str2 = malloc(sizeof(char) * 4);

    for (int i = 3; i > 0; i--) {
        if (len == 0)
            str2[i] = '0';
        else {
            str2[i] = str[len - 1];
            len -= 1;
        }
    }
    str2[0] = '\\';
    return (str2);
}

void put_a_s(va_list ap)
{
    char *base = "01234567";
    char *str = va_arg(ap, char *);
    char *str2;

    for (int i = 0; str[i]; i++) {
        if (str[i] < 32 || str[i] >= 127) {
            str2 = decimal_to_others(str[i], base);
            str2 = add_0(str2);
            my_putstr(str2);
        }
        else
            my_putchar(str[i]);
    }
}