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

void put_a_number(va_list ap)
{
    int nbr;

    nbr = va_arg(ap, int);
    my_put_nbr(nbr);
}