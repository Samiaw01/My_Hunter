/*
** EPITECH PROJECT, 2020
** main
** File description:
** c le main
*/

#include "my.h"

void init_life(game_t *game)
{
    static int x;
    static int y;
    sfIntRect rect;
    sfTexture *texture;
    game->sprite = sfSprite_create();
    x = 10;
    y = 900;
    rect.top = 0;
    rect.left = 0;
    rect.width = 300;
    rect.height = 82;
    texture = sfTexture_createFromFile \
    ("sprite/life.png", NULL);
    sfSprite_setTexture(game->sprite, \
    texture, sfTrue);
    sfSprite_setTextureRect(game->sprite, rect);
    sfSprite_setPosition(game->sprite, (sfVector2f){x, y});
    sfRenderWindow_drawSprite(game->window, \
    game->sprite, NULL);
}

void init_life_one(game_t *game)
{
    static int x;
    static int y;
    sfIntRect rect;
    sfTexture *texture;
    game->sprite = sfSprite_create();
    x = 10;
    y = 900;
    rect.top = 0;
    rect.left = 0;
    rect.width = 300;
    rect.height = 82;
    texture = sfTexture_createFromFile \
    ("sprite/life-1.png", NULL);
    sfSprite_setTexture(game->sprite, \
    texture, sfTrue);
    sfSprite_setTextureRect(game->sprite, rect);
    sfSprite_setPosition(game->sprite, (sfVector2f){x, y});
    sfRenderWindow_drawSprite(game->window, \
    game->sprite, NULL);
}

void init_life_two(game_t *game)
{
    static int x;
    static int y;
    sfIntRect rect;
    sfTexture *texture;
    game->sprite = sfSprite_create();
    x = 10;
    y = 900;
    rect.top = 0;
    rect.left = 0;
    rect.width = 300;
    rect.height = 82;
    texture = sfTexture_createFromFile \
    ("sprite/life-2.png", NULL);
    sfSprite_setTexture(game->sprite, \
    texture, sfTrue);
    sfSprite_setTextureRect(game->sprite, rect);
    sfSprite_setPosition(game->sprite, (sfVector2f){x, y});
    sfRenderWindow_drawSprite(game->window, \
    game->sprite, NULL);
}

void life_condition(game_t *game)
{
    if (game->life == 3)
        init_life(game);
    if (game->life == 2)
        init_life_one(game);
    if (game->life == 1)
        init_life_two(game);
}