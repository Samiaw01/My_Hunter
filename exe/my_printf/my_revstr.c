/*
** EPITECH PROJECT, 2020
** revstr
** File description:
** reverse a string
*/

#include "my.h"

char *my_revstr(char *str)
{
    char dest;
    int t = my_strlen(str);

    for (int i = 0; i < t - 1; i++) {
        dest = str[i];
        str[i] = str[t - 1];
        str[t - 1] = dest;
        t -= 1;
    }
    return (str);
}
