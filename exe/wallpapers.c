/*
** EPITECH PROJECT, 2020
** drawing
** File description:
** draw
*/

#include "my.h"

void wallpaper(game_t *game)
{
    static int x = 0;
    static int y = 0;
    game->sprite = sfSprite_create();
    sfIntRect rect;
    rect.top = 0;
    rect.left = 0;
    rect.width = 1280;
    rect.height = 1024;
    sfTexture *wallpaper;
    wallpaper = sfTexture_createFromFile \
    ("sprite/wallpaper.jpg", NULL);
    sfSprite_setTexture(game->sprite, wallpaper, sfTrue);
    sfSprite_setTextureRect(game->sprite, rect);
    sfSprite_setPosition(game->sprite, (sfVector2f){x, y});
    sfRenderWindow_drawSprite(game->window, game->sprite, NULL);
    sfTexture_destroy(wallpaper);
}

void wallpaper_m(game_t *game)
{
    static int x = 0;
    static int y = 0;
    game->sprite = sfSprite_create();
    sfIntRect rect;
    rect.top = 0;
    rect.left = 0;
    rect.width = 1280;
    rect.height = 1024;
    sfTexture *wallpaper;
    wallpaper = sfTexture_createFromFile \
    ("sprite/wallpaper_m.jpg", NULL);
    sfSprite_setTexture(game->sprite, wallpaper, sfTrue);
    sfSprite_setTextureRect(game->sprite, rect);
    sfSprite_setPosition(game->sprite, (sfVector2f){x, y});
    sfRenderWindow_drawSprite(game->window, game->sprite, NULL);
    sfTexture_destroy(wallpaper);
}

void print_duck(game_t *game)
{
    sfTexture *texture;
    game->sprite_c = sfSprite_create();
    texture = sfTexture_createFromFile("sprite/image.png", NULL);
    sfSprite_setTexture(game->sprite_c, texture, sfTrue);
    sfSprite_setTextureRect(game->sprite_c, game->rect_o);
    sfSprite_setPosition(game->sprite_c, (sfVector2f){game->x, game->y});
    sfRenderWindow_drawSprite(game->window, game->sprite_c, NULL);
}