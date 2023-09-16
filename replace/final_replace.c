/*
** EPITECH PROJECT, 2021
** replace_final.c
** File description:
** replace_final.c
** First edition:
** 23:13:42 25/11/2021
*/

#include "../include/bsq.h"

static void fin_rep(unsigned short int **tab, coordinates_t coordinates, int i)
{
    int j = 0;

    for (j; j < coordinates.x; j++) {
        if (tab[i][j] == 0)
            tab[i][j] = 'o';
        else if (tab[i][j] != 0 && tab[i][j] != 120)
            tab[i][j] = '.';
    }
}

void final_replace(unsigned short int **tab, coordinates_t coordinates)
{
    for (int i = 0; i < coordinates.y; i++)
        fin_rep(tab, coordinates, i);
}
