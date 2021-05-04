/*
** EPITECH PROJECT, 2020
** My put nbr
** File description:
** Put a char
*/

#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include "my.h"

void put_a_char(va_list ap)
{
    char r;

    r = va_arg(ap, int);
    my_putchar(r);
}