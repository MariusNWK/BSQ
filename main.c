/*
** EPITECH PROJECT, 2020
** main
** File description:
** BSQ
*/
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include "my.h"

int main(int ac, char **av)
{
    Square fs;

    if (ac != 2) {
        write(2, "Invalid number of arguments\n", 29);
        return (84);
    }
    if (file_reader(av[1], &fs) == NULL) {
        write(2, "Invalid file or argument\n", 26);
        return (84);
    }
    write(1, fs.src, fs.lignes * fs.n);
    free(fs.src);
    return (0);
}
