/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** task 2
*/
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdint.h>

typedef struct Square
{
    char *src;
    char *nbr;
    int_fast32_t *val;
    int_fast32_t lignes;
    int_fast32_t val_tested;
    int_fast32_t val_max;
    int_fast32_t k;
    int_fast32_t z;
    int_fast32_t n;
    int error;
} Square;

void minor_deleter(int, int, Square *);
void minor_deleter_two(int, int, Square *);
int minor_deleter_three(int, int, Square *);
void minor_deleter_four(int, char *, Square *);
void minor_deleter_five(int, int, char *, Square *);
void lines_and_columns(char *, Square *);
void copy_strings(char *, Square *);
void algo_maths(Square *);
void val_max_finder(Square *);
void final_map(Square *);
size_t getfilesize(char const *);
void find_size_of_biggest_square(char *, Square *);
void *file_reader(char const *, Square *);
void *file_reader_test(char const *);
void my_put_tabstr(char **, int, int, Square *);
void my_putstr_bsq(char const *, int);
int my_putstr(char const *);
void my_putchar(char);
char *my_strstr(char *, char const *);
int my_isneg(int);
int my_strcmp(char const *, char const *);
int my_put_nbr(int);
int my_strncmp(char const *, char const *, int);
void my_swap(int *, int *);
char *my_strupcase(char *);
char *my_strlowcase(char *);
int my_strlen(char const *);
char *my_strcapitalize(char *);
int my_getnbr(char const *);
int my_str_isalpha(char const *);
void my_sort_int_array(int *, int);
int my_str_isnum(char const *);
int my_compute_power_rec(int, int);
int my_str_islower(char const *);
int my_compute_square_root(int);
int my_str_isupper(char const *);
int my_is_prime(int);
int my_str_isprintable(char const *);
int my_find_prime_sup(int);
int my_showstr(char const *);
char *my_strcpy(char *, char const *);
int my_showmem(char const *, int);
char *my_strncpy(char *, char const *, int);
char *my_strcat(char *, char const *);
char *my_revstr(char *);
char *my_strncat(char *, char const *, int);
char *my_strdup(char const *);
