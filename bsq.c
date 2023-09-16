/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** bsq
*/

#include "./include/bsq.h"

static void declare_coords(coordinates_t *coordinates, char const *buffer)
{
    unsigned int turns = 0;
    coordinates->x = 0;
    coordinates->y = 0;

    for (int i = 0; turns != 2; i++) {
        if (buffer[i] == '\n')
            turns++;
        if (turns == 0)
            coordinates->y = (coordinates->y * 10) + (buffer[i] - 48);
        else if (turns == 1)
            (coordinates->x)++;
    }
}

int main(int ac, char **av)
{
    char             *buffer;
    coordinates_t    coordinates;
    int              fd;
    int              err;
    struct stat      struct_size;
    stat(av[1], &struct_size);

    err = open((const char *)(stderr), O_APPEND);
    fd = open(av[1], O_RDONLY);
    buffer = malloc(sizeof(char) * (struct_size.st_size + 1));
    read(fd, buffer, struct_size.st_size);
    buffer[struct_size.st_size] = '\0';
    declare_coords(&coordinates, buffer);
    if (error_handling(coordinates, buffer) == 1) {
        write(2, "Invalid file\n", 13);
        return 84;
    }
    fs_openfile(&buffer, coordinates);
    close(fd);
    return 0;
}
