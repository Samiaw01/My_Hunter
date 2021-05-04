/*
** EPITECH PROJECT, 2020
** drawing
** File description:
** draw
*/

#include "my.h"

void start(game_t *game)
{
    init_all(game);

    while (sfRenderWindow_isOpen(game->window)) {
        sfRenderWindow_clear(game->window, sfBlack);
        while (sfRenderWindow_pollEvent(game->window, &game->event)) {
            more(game);
        }
        do_all(game);
    }
    destr(game);
}

void init_all(game_t *game)
{
    game->rect_o.height = 110;
    game->rect_o.left = 0;
    game->rect_o.top = 0;
    game->rect_o.width = 110;
    button_start(game);
}

void destr(game_t *game)
{
    sfSprite_destroy(game->sprite);
    if (game->active == 1)
        sfSprite_destroy(game->sprite_c);
    if (game->active == 0)
        sfSprite_destroy(game->sprite_b);
    sfSprite_destroy(game->sprite_k);
    sfRenderWindow_destroy(game->window);
    sfClock_destroy(game->clock);
}

void other(game_t *game)
{
    get_pos_cursor(game);
    wallpaper_m(game);
    if (game->active == 0)
        button_start_is_clicked(game);
    if (game->active == 1) {
        touch(game);
        wallpaper(game);
        life_condition(game);
        sfSprite_destroy(game->sprite_b);
    }
}

void touch(game_t *game)
{
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow \
    (game->window);
    if (game->event.type == sfEvtMouseButtonPressed &&
    sfMouse_isButtonPressed(sfMouseLeft)) {
        if (game->x <= mouse_pos.x && mouse_pos.x <= game->x + 110 && \
        game->y <= mouse_pos.y && mouse_pos.y <= game->y + 110) {
            game->speed -= 0.002;
            game->x = 0;
            game->y = rand() % 500;
            game->points += 10;
            my_printf("Points : %d\n", game->points);
        }
    }
}