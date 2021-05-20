/*
** EPITECH PROJECT, 2020
** minor_deleter
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

void minor_deleter(int i, int j, Square *fs)
{
    if ((*fs).val[(i - 1) * (*fs).n + (j - 1)] <=
        (*fs).val[(i - 1) * (*fs).n + j] &&
        (*fs).val[(i - 1) * (*fs).n + (j - 1)] <=
        (*fs).val[i * (*fs).n + (j - 1)])
        (*fs).val[i * (*fs).n + j] =
        (*fs).val[(i - 1) * (*fs).n + (j - 1)] + 1;
    else if ((*fs).val[(i - 1) * (*fs).n + j] <=
        (*fs).val[(i - 1) * (*fs).n + (j - 1)] &&
        (*fs).val[(i - 1) * (*fs).n + j] <=
        (*fs).val[i * (*fs).n + (j - 1)])
        (*fs).val[i * (*fs).n + j] =
        (*fs).val[(i - 1) * (*fs).n + j] + 1;
    else
        (*fs).val[i * (*fs).n + j] =
        (*fs).val[i * (*fs).n + (j - 1)] + 1;
}

void minor_deleter_two(int i, int j, Square *fs)
{
    if ((*fs).val[i  * (*fs).n + j] >=
        (*fs).val[i * (*fs).n + (j - 1)] &&
        (*fs).val[i * (*fs).n + j] >= (*fs).val_tested)
        (*fs).val_tested = (*fs).val[i * (*fs).n + j];
    if ((*fs).val_tested > (*fs).val_max)
        (*fs).val_max = (*fs).val_tested;
}

int minor_deleter_three(int ival, int jval, Square *fs)
{
    int val_max_finder = 0;

    if ((*fs).val[ival * (*fs).n + jval] == (*fs).val_max)
        val_max_finder = 1;
    return (val_max_finder);
}

void minor_deleter_four(int ign, char *str, Square *fs)
{
    int i = 0;

    (*fs).nbr = malloc(sizeof(char) * (ign + 1));
    for (i = 0; str[i] != '\n'; i++)
        (*fs).nbr[i] = str[i];
    (*fs).nbr[i] = '\0';
}

void minor_deleter_five(int j, int a, char *str, Square *fs)
{
    switch (str[a]) {
    case 'o' :
        (*fs).val[(*fs).k * (*fs).n + j] = 0;
        break;
    case '.' :
        (*fs).val[(*fs).k * (*fs).n + j] = 1;
        break;
    }
}
