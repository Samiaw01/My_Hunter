/*
** EPITECH PROJECT, 2020
** Particle
** File description:
** temp.h
*/

#ifndef __INCLUDED_H__
#define __INCLUDED_H__

#include <SFML/Audio/Export.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <SFML/Audio/SoundStatus.h>
#include <SFML/Audio/Types.h>
#include <SFML/System/InputStream.h>
#include <SFML/System/Time.h>
#include <SFML/System/Vector3.h>
#include <SFML/System/Time.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdbool.h>
#include <SFML/Window.h>
#include <stdio.h>
#include "../exe/my_printf/my.h"

#define WIDTH 1280
#define HEIGHT 1024

typedef struct game_s
{
    int x;
    int y;
    int x_a;
    int y_a;
    int active;
    sfSprite *sprite;
    sfSprite *sprite_k;
    sfSprite *sprite_c;
    sfSprite *sprite_b;
    sfRenderWindow *window;
    sfEvent event;
    sfClock *clock;
    sfClock *clock_two;
    sfIntRect rect;
    sfIntRect rect_o;
    sfVideoMode mode;
    int points;
    float speed;
    sfTexture *texture;
    int life;
} game_t;

void more(game_t *game);
void do_all(game_t *game);
void wallpaper_m(game_t *game);
void print_duck(game_t *game);
void cursor(game_t *game);
void get_pos_cursor(game_t *game);
void init_all(game_t *game);
void life_condition(game_t *game);
void init_life(game_t *game);
void init_life_one(game_t *game);
void init_life_two(game_t *game);
void destr(game_t *game);
void touch(game_t *game);
void button_start(game_t *game);
void other_init(game_t *game);
void button_newstart(game_t *game);
void button_start_is_clicked(game_t *game);
void initialisation(void);
void wallpaper(game_t *game);
void start(game_t *game);
void draw_sprite(game_t *game);
float time(game_t *game);
void my_putchar(char c);
void draw_start(game_t *game);
void draw_startnew(game_t *game);
void other(game_t *game);

#endif