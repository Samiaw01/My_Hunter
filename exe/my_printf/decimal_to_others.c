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

int for_decimal_to_others(unsigned int n, int q, int c)
{
    for (int g = 0; n != 0; g++) {
        n /= q;
        c += 1;
    }
    return (c);
}

char *decimal_to_others(unsigned int n, char *base)
{
    int c = 0;
    int q = my_strlen(base);
    char *str;
    int i = 0;
    unsigned int cn = n;

    c = for_decimal_to_others(n, q, c);
    str = malloc(sizeof(char) * (c + 1));
    n = cn;

    for (; n != 0; i++) {
        str[i] = base[n % q];
        n = n / q;
    }
    str[i + 1] = '\0';
    str = my_revstr(str);
    return (str);
}