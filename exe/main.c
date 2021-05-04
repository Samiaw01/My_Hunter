/*
** EPITECH PROJECT, 2020
** drawing
** File description:
** draw
*/

#include "my.h"

int main(int argc, char *argv[])
{
    char *str = argv[1];

    if (argc == 2 && str[1] == 'h' && str[0] == '-') {
        write(1, "To start the game, you must write in the terminal :", 52);
        write(1, " \n\n./my_hunter\n\n and to close it just press the", 48);
        write(1, " Escape key or click the close button.\n", 40);
        return (0);
    }
    if (argc == 1) {
        initialisation();
        return (0);
    }
    return (84);
}

void initialisation(void)
{
    game_t game;
    game.points = 0;
    game.speed = 0.04;
    game.life = 3;
    game.x = 0;
    game.y = rand() % 500;
    game.active = 0;
    game.mode.bitsPerPixel = 64;
    game.mode.width = WIDTH;
    game.mode.height = HEIGHT;
    game.clock = sfClock_create();
    game.clock_two = sfClock_create();
    game.window = sfRenderWindow_create(game.mode, "My Hunter", \
    sfDefaultStyle, NULL);
    sfRenderWindow_setFramerateLimit(game.window, 144);
    other_init(&game);
}

void other_init(game_t *game)
{
    start(game);
    if (game->active == 1)
        my_printf("Game Over ! (Score : %d)\n", game->points);
}
