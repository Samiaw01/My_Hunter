/*
** EPITECH PROJECT, 2020
** time
** File description:
** its the clock
*/

#include "my.h"

float time(game_t *game)
{
    sfTime time;
    float seconds;
    if (game->clock != NULL) {
        time = sfClock_getElapsedTime(game->clock);
        seconds = time.microseconds / 1000000.0;
    }
    return (seconds);
}

void more(game_t *game)
{
    if (game->event.type == sfEvtClosed || \
    game->event.key.code == sfKeyEscape) {
        sfRenderWindow_close(game->window);
    }
}