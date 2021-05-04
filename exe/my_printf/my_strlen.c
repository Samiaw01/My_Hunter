/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** tinkiet
*/

int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i]; i++);
    return (i);
}