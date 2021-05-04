/*
** EPITECH PROJECT, 2020
** My get nbr
** File description:
** Get numbers
*/

int my_getnbr(char *str)
{
    int str2 = 0;
    int ikb = 0;

    for (int k = 0; str[k]; k++) {
        if (str[k] > 47 && str[k] < 59)
            str2 = (str2 * 10) + (str[k] - 48);
    }
    for (int a = 0; str[a] > 47 && str[a] < 59; a++) {
        if (str[a] == 45)
            ikb = ikb + 1;
    }
    if (ikb % 2 == 1)
        str2 = str2 * (-1);
    return (str2);
}