/*
** EPITECH PROJECT, 2020
** drawing
** File description:
** draw
*/

#include "my.h"

float time_two(game_t *game)
{
    sfTime time_two;
    float seconds;
    if (game->clock_two != NULL) {
        time_two = sfClock_getElapsedTime(game->clock_two);
        seconds = time_two.microseconds / 1000000.0;
    }
    return (seconds);
}

void draw_sprite(game_t *game)
{
    game->sprite_c = sfSprite_create();
    game->texture = sfTexture_createFromFile("sprite/image.png", NULL);
    sfSprite_setTexture(game->sprite_c, game->texture, sfTrue);
    if (time_two(game) > 0.3) {
        game->rect_o.left += 110;
        if (game->rect_o.left >= 220)
            game->rect_o.left = 0;
        sfClock_restart(game->clock);
    }
    sfSprite_setTextureRect(game->sprite_c, game->rect_o);
    sfSprite_setPosition(game->sprite_c, (sfVector2f){game->x, game->y});
    sfRenderWindow_drawSprite(game->window, game->sprite_c, NULL);
    if (game->x >= 1280) {
        game->x = 0;
        game->y = rand() % 500;
        game->life -= 1;
    } else
        game->x += 20;
    sfTexture_destroy(game->texture);
}

void do_all(game_t *game)
{
    if (game->life == 0)
        sfRenderWindow_close(game->window);
    other(game);
    if (time(game) > game->speed) {
        if (game->active == 1) {
            draw_sprite(game);
            sfClock_restart(game->clock);
        }
    } else
        print_duck(game);
    cursor(game);
    sfRenderWindow_display(game->window);
}