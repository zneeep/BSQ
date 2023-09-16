/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** special_case
*/

#include "../include/bsq.h"

static void special_case_x(unsigned short **tab, unsigned int x)
{
    for (int i = 0; i < x; i++) {
        if (tab[0][i] == 1) {
            tab[0][i] = 'x';
            break;
        }
    }
}

static void special_case_y(unsigned short **tab, unsigned int y)
{
    for (int j = 0; j < y; j++) {
        if (tab[j][0] == 1) {
            tab[j][0] = 'x';
            break;
        }
    }
}

void special_case(unsigned short **tab, coordinates_t coordinates)
{
    if (coordinates.x - 1 == 1)
        special_case_y(tab, coordinates.y);
    else if (coordinates.y == 1)
        special_case_x(tab, coordinates.x);
}
