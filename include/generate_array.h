/*
** EPITECH PROJECT, 2021
** generate_array.h
** File description:
** generate_array.h
** First edition:
** 22:23:06 25/11/2021
*/

#ifndef BSQ_C_GENERATE_ARRAY_H
    #define BSQ_C_GENERATE_ARRAY_H

typedef struct {
    unsigned int x;
    unsigned int y;
} coordinates_t;

void    fs_openfile(char *buffer[], coordinates_t coordinates);
void    reverse_deminor(unsigned short **tab, coordinates_t coordinates);

#endif //BSQ_C_GENERATE_ARRAY_H
