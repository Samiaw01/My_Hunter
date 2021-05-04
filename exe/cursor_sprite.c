/*
** EPITECH PROJECT, 2020
** main
** File description:
** c le main
*/

#include "my.h"

void cursor(game_t *game)
{
    game->sprite_k = sfSprite_create();
    sfIntRect rect;
    sfTexture *texture;
    rect.top = 0;
    rect.left = 0;
    rect.width = 229;
    rect.height = 229;
    texture = sfTexture_createFromFile \
    ("sprite/cursor1.png", NULL);
    sfSprite_setTexture(game->sprite_k, \
    texture, sfTrue);
    sfSprite_setTextureRect(game->sprite_k, rect);
    sfSprite_setPosition(game->sprite_k, (sfVector2f) \
    {game->x_a, game->y_a});
    sfVector2f scale;
    scale.x = 0.20;
    scale.y = 0.20;
    sfSprite_setScale(game->sprite_k, scale);
    sfRenderWindow_drawSprite(game->window, game->sprite_k, NULL);
}

void get_pos_cursor(game_t *game)
{
    sfRenderWindow_setMouseCursorVisible(game->window, sfFalse);
    sfVector2i souris_pos = sfMouse_getPositionRenderWindow \
    (game->window);
    sfVector2f souris_po;
    souris_po.x = souris_pos.x;
    souris_po.y = souris_pos.y;
    game->x_a = souris_po.x;
    game->y_a = souris_po.y;
}