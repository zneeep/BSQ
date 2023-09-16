/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** extra_functions
*/

#include "../include/bsq.h"

void replace_square2(int *stack, unsigned short int **tab)
{
    for (int j = stack[1] + 1; j < stack[1] + stack[0] + 1; j++) {
        for (int c = stack[2] + 1; c < stack[2] + stack[0] + 1; c++)
            tab[j][c] = 120;
    }
}

void replace_square(unsigned short int **tab, int *stack)
{
    for (int i = 0; i < stack[0]; i++)
        replace_square2(stack ,tab);
}
