/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** calc_square
*/

#include "../include/bsq.h"

static void declare_pos(pos_t *pos)
{
    pos->x      = 0;
    pos->y      = 0;
    pos->size   = 0;
}

void reverse_deminor(unsigned short **tab, coordinates_t coordinates)
{
    int i, j;
    int *stack = malloc(sizeof(int) * 3);
    stack[0] = 0;

    if (coordinates.x == 1 || coordinates.y == 1)
        special_case(tab, coordinates);
    for (j = 1; j < coordinates.y; j++) {
        for (i = 1; i < (coordinates.x) - 1; i++) {
            find_bsq(i, j, tab, stack);
        }
    }
    replace_square(tab, stack);
    final_replace(tab, coordinates);
    free(stack);
}
