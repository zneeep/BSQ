/*
** EPITECH PROJECT, 2021
** bsq.c
** File description:
** errors
*/

#ifndef ERRORS_H_
    #define ERRORS_H_

int check_first_line(coordinates_t coordinates, char const *buffer);
int check_length(coordinates_t coordinates, char const *buffer);
int check_carac(char const *buffer);
int error_handling(coordinates_t coordinates, char const *buffer);

#endif /* !ERRORS_H_ */
