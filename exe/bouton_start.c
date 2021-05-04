/*
** EPITECH PROJECT, 2020
** main
** File description:
** c le main
*/

#include "my.h"

void button_start(game_t *game)
{
    sfIntRect rect;
    game->sprite_b = sfSprite_create();
    static int x = 420;
    static int y = 350;
    rect.width = 470;
    rect.height = 156;
    rect.top = 0;
    rect.left = 0;
    sfTexture *texture = sfTexture_createFromFile \
    ("sprite/start.png", NULL);
    sfSprite_setTexture(game->sprite_b, texture, sfTrue);
    sfSprite_setTextureRect(game->sprite_b, rect);
    sfSprite_setPosition(game->sprite_b, (sfVector2f){x, y});
    sfRenderWindow_drawSprite(game->window, \
    game->sprite_b, NULL);
}

void button_newstart(game_t *game)
{
    sfIntRect rect;
    static int x = 420;
    static int y = 350;
    game->sprite_b = sfSprite_create();
    rect.width = 470;
    rect.height = 156;
    rect.top = 0;
    rect.left = 0;
    sfTexture *texture = sfTexture_createFromFile \
    ("sprite/startnew.png", NULL);
    sfSprite_setTexture(game->sprite_b, texture, sfTrue);
    sfSprite_setTextureRect(game->sprite_b, rect);
    sfSprite_setPosition(game->sprite_b, (sfVector2f){x, y});
    sfRenderWindow_drawSprite(game->window, \
    game->sprite_b, NULL);
}

void button_start_is_clicked(game_t *game)
{
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow \
    (game->window);
    if (game->event.type == sfEvtMouseButtonPressed &&
    sfMouse_isButtonPressed(sfMouseLeft)) {
        if (420 <= mouse_pos.x && mouse_pos.x <= 420 + 470 && \
        350 <= mouse_pos.y && mouse_pos.y <= 350 + 156) {
            game->active = 1;
        }
    }
    if (420 <= mouse_pos.x && mouse_pos.x <= 420 + 470 && \
        350 <= mouse_pos.y && mouse_pos.y <= 350 + 156) {
        button_newstart(game);
    } else {
        button_start(game);
    }
}