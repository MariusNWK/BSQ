/*
** EPITECH PROJECT, 2020
** test
** File description:
** filereader
*/
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include "my.h"

size_t getfilesize_test(char const *filepath)
{
    struct stat st;

    if (stat(filepath, &st) != 0)
        return (0);
    return (st.st_size);
}

void *file_reader_test(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    char *str;

    if (getfilesize_test(filepath) == 0)
        return (NULL);
    str = malloc(getfilesize_test(filepath) + 1);
    str[getfilesize_test(filepath)] = '\0';
    read(fd, str, getfilesize_test(filepath));
    return (str);
}
