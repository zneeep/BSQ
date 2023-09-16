/*
** EPITECH PROJECT, 2021
** find_bsq.c
** File description:
** find_bsq.c
** First edition:
** 22:50:27 25/11/2021
*/

#include "../include/bsq.h"

static int check_min(short left, short top, short corner)
{
    if (left <= top && left <= corner)
        return left;
    else if (top < corner)
        return top;
    else
        return corner;
}

void find_bsq(int i, int j, unsigned short **tab, int *stack)
{
    if (tab[j][i] == 0) {
        return;
    } else if (tab[j][i] != 0) {
        tab[j][i] = check_min(tab[j][i - 1], tab[j - 1][i],
        tab[j - 1][i - 1]) + 1;
    }
    if (tab[j][i] > stack[0]) {
        stack[0] = tab[j][i];
        stack[1] = j - stack[0];
        stack[2] = i - stack[0];
    }
}
