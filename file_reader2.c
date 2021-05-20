/*
** EPITECH PROJECT, 2020
** file_reader2
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

void lines_and_columns(char *str, Square *fs)
{
    for ((*fs).z = 0; str[(*fs).z] != '\n'; (*fs).z++);
    (*fs).z = (*fs).z + 1;
    for (int a = (*fs).z; str[a] != '\n'; a++)
        (*fs).n++;
    (*fs).n = (*fs).n + 1;
    for (int a = (*fs).z, b = 0; str[a] != '\0'; a++, b++) {
        if (str[a] == '\n' && b != (*fs).n - 1)
            (*fs).error = 1;
        if (str[a] == '\n') {
            (*fs).lignes++;
            b = -1;
        }
        if (str[a] == '.')
            (*fs).val_max = 1;
    }
}

void copy_strings(char *str, Square *fs)
{
    (*fs).src = malloc(sizeof(char) * ((*fs).lignes * (*fs).n + 1));
    (*fs).val = malloc(sizeof(int *) * ((*fs).lignes * (*fs).n + 1));
    for (int a = (*fs).z, j = 0; str[a] != '\0'; a++, j++) {
        (*fs).src[(*fs).k * (*fs).n + j] = str[a];
        if (str[a] != '\n') {
            minor_deleter_five(j, a, str, fs);
        }
        else {
            (*fs).k = (*fs).k + 1;
            j = -1;
        }
    }
}

void algo_maths(Square *fs)
{
    for (int i = 1, j = 1; i < (*fs).lignes; j++) {
        if ((*fs).src[i * (*fs).n + j] == '\n') {
            i = i + 1;
            j = 0;
        }
        else if ((*fs).src[i * (*fs).n + j] == '.') {
            minor_deleter(i, j, fs);
        }
    }
}

void val_max_finder(Square *fs)
{
    for (int i = 0, j = 1; i < (*fs).lignes; i++) {
        for (j = 1; j < (*fs).n - 1; j++) {
            minor_deleter_two(i, j, fs);
        }
    }
}

void final_map(Square *fs)
{
    int ival = 0;
    int jval = 0;
    int val_max_finder = 0;

    for (ival = 0; ival < (*fs).lignes && val_max_finder == 0; ival++)
        for (jval = 0; jval < (*fs).n - 1 && val_max_finder == 0; jval++)
            val_max_finder = minor_deleter_three(ival, jval, fs);
    jval = jval - 1;
    ival = ival - 1;
    for (int x = 0, xval = ival; x < (*fs).val_max; x++, xval--)
        for (int y = 0, yval = jval; y < (*fs).val_max; y++, yval--)
            (*fs).src[xval * (*fs).n + yval] = 'x';
}
