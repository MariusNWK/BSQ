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

size_t getfilesize(char const *filepath)
{
    struct stat st;

    if (stat(filepath, &st) != 0)
        return (0);
    return (st.st_size);
}

void initial_struct_values(char *str, Square *fs)
{
    (*fs).lignes = 0;
    (*fs).val_tested = 0;
    (*fs).val_max = 0;
    (*fs).n = 0;
    (*fs).k = 0;
    (*fs).error = 0;
}

void find_size_of_biggest_square(char *str, Square *fs)
{
    initial_struct_values(str, fs);
    lines_and_columns(str, fs);
    copy_strings(str, fs);
    algo_maths(fs);
    val_max_finder(fs);
    final_map(fs);
    free((*fs).val);
}

char *string_str(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    char *str;

    str = malloc(getfilesize(filepath) + 1);
    read(fd, str, getfilesize(filepath));
    str[getfilesize(filepath)] = '\0';
    close(fd);
    return (str);
}

void *file_reader(char const *filepath, Square *fs)
{
    char *str = string_str(filepath);
    int ign = 0;

    if (getfilesize(filepath) == 0) return (NULL);
    for (; str[ign] != '\n'; ign++)
        if (str[ign] < '0' || str[ign] > '9') return (NULL);
    minor_deleter_four(ign, str, fs);
    ign = ign + 1;
    for (int k = ign; str[k] != '\0'; k++) {
        if (str[k] != 'o' && str[k] != '.' && str[k] != '\n') return (NULL);
    }
    find_size_of_biggest_square(str, fs);
    free(str);
    if (my_getnbr((*fs).nbr) != (*fs).lignes) return (NULL);
    if ((*fs).error == 1) return (NULL);
    return ((*fs).src);
}
