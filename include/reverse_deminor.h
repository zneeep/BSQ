/*
** EPITECH PROJECT, 2021
** reverse_deminor.h
** File description:
** reverse_deminor.h
** First edition:
** 22:50:45 25/11/2021
*/

#ifndef BSQ_C_REVERSE_DEMINOR_H
    #define BSQ_C_REVERSE_DEMINOR_H

typedef struct {
    unsigned short x;
    unsigned short y;
    unsigned short size;
} pos_t;

    void find_bsq(int i, int j, unsigned short **tab, int *stack);
    void special_case(unsigned short **tab, coordinates_t coordinates);

#endif