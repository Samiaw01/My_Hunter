/*
** EPITECH PROJECT, 2020
** My put nbr
** File description:
** Put octal
*/

#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include "my.h"

void put_a_octal(va_list ap)
{
    char *base = "01234567";
    unsigned int n = va_arg(ap, unsigned int);
    char *str = decimal_to_others(n, base);
    my_putstr(str);
}