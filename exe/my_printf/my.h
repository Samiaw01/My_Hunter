/*
** EPITECH PROJECT, 2020
** easy
** File description:
** my h
*/

#ifndef MY_HH_
#define MY_HH_

#include <stdarg.h>
#include <string.h>
#include <unistd.h>

typedef struct array_s
{
    char c;
    void (*ptr)(va_list);
} array_t;

typedef char *t_value;

char **reverse_v(char **nb, int argc);
char *my_getnbr2(char *str);
char **reverse(char **nb, int argc);
char **cb(int argc, char *argv[]);
char **bubble_sort(char **nb, int f);
int my_getnbr(char *str);
void print_int(int *array, size_t index);
int compare_string(char *a, char *b);
void my_swap_s(t_value *a, t_value *b);
void print_string(char **array, size_t index);
int my_printf(char *str, ...);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
int for_decimal_to_others(unsigned int n, int q, int c);
char *decimal_to_others(unsigned int n, char *base);
void put_a_octal(va_list ap);
void put_a_string(va_list ap);
void put_a_number(va_list ap);
void put_a_char(va_list ap);
char *my_revstr(char *str);
void put_a_s(va_list ap);
char *add_0(char *str);
void array_print(int *array, size_t size);
void array_sort(int *array, size_t size);
void my_swap(int *a, int *b);

#endif /* !MY_HH_ */