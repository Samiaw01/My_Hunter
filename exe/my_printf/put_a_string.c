/*
** EPITECH PROJECT, 2020
** My put nbr
** File description:
** Put a string
*/

#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include "my.h"

void put_a_string(va_list ap)
{
    char *string;

    string = va_arg(ap, char *);
    my_putstr(string);
}