/*
** EPITECH PROJECT, 2021
** fs_openfile.c
** File description:
** fs_openfile.c
** First edition:
** 22:24:36 25/11/2021
*/

#include "../include/bsq.h"

static void display(unsigned short **tab, coordinates_t coordinates)
{
    char **array = malloc(sizeof(char *) * coordinates.y);

    for (int i = 0; i < coordinates.y; i++)
        array[i] = malloc(sizeof(char) * coordinates.x);
    for (int i = 0; i < coordinates.y; i++) {
        for (int j = 0; j < coordinates.x - 1; j++)
            array[i][j] = tab[i][j];
    }
    for (int i = 0; i < coordinates.y; i++) {
        write(1, array[i], (coordinates.x) - 1);
        write(1, "\n", 1);
    }
    for (int i = 0; i < coordinates.y; i++)
        free(array[i]);
    free(array);
}

static unsigned int size_start_array(const char *array)
{
    int turns = 0;

    for (int i = 0; array[i] != '\n'; ++i) {
        turns++;
    }
    return ++turns;
}

void fs_openfile(char *buffer[], coordinates_t coordinates)
{
    unsigned int    rank = size_start_array(*buffer);
    unsigned short  **tab = malloc(sizeof(unsigned short *) * coordinates.y);

    for (int place = 0; place < coordinates.y; place++)
        tab[place] = malloc (sizeof(unsigned short) * coordinates.x);
    for (int i = 0; i < coordinates.y; i++) {
        for (int j = 0; j < coordinates.x; j++) {
            if ((*buffer)[rank] == '.')
                tab[i][j] = 1;
            else if ((*buffer)[rank] == 'o')
                tab[i][j] = 0;
            rank++;
        }     
    }   
    free(*buffer);
    reverse_deminor(tab, coordinates);
    display(tab, coordinates);
    for (int i = 0; i < coordinates.y; ++i)
        free(tab[i]);
    free(tab);
}
