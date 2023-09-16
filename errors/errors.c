/*
** EPITECH PROJECT, 2021
** bsq.c
** File description:
** errors
*/

#include "../include/bsq.h"

int check_first_line(coordinates_t coordinates, char const *buffer)
{
    int turns = 0;
    int rank = 0;
    
    while (buffer[rank] != 0) {
        if (buffer[rank] == '\n')
            turns++;
        rank++;
    }
    if ((turns - 1) != coordinates.y)
        return 1;
    else 
        return 0;
}

int check_length(coordinates_t coordinates, char const *buffer)
{
    int rank = 0;
    int length;

    while (buffer[rank] != '\n')
        rank++;
    for (int i = 0; i < coordinates.y; i++) {
        if (buffer[rank + (i + 1) * coordinates.x] != '\n')
            return 1;
    }
    return 0;
}

int check_carac(char const *buffer)
{
    int rank = 0;
    
    while (buffer[rank] != '\n')
        rank++;
    while (buffer[rank] != '\0') {
        if (buffer[rank] != '\n' && buffer[rank] != 'o' &&
        buffer[rank] != '.' && buffer[rank] != '\0') {
            return 1;
        } else {
            rank++;
        }
    }
    return 0;
}

int error_handling(coordinates_t coordinates, char const *buffer)
{
    if (check_carac(buffer) == 1 || check_length(coordinates, buffer) == 1 ||
    check_first_line(coordinates, buffer)) {
        return 1;
    }
    else {
        return 0;
    }
}
