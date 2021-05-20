/*
** EPITECH PROJECT, 2020
** test
** File description:
** BSQ
*/
#include <criterion/criterion.h>
#include <stdio.h>
#include "my.h"

Test(BSQ, one_filled_column)
{
    Square fs;
    char *str_test = file_reader_test("mouli_maps_solved/intermediate_map_one_filled_column");
    char *str_mine = file_reader("mouli_maps/intermediate_map_one_filled_column", &fs);
    cr_assert_str_eq(str_mine, str_test);
    free(str_test);
    free(str_mine);
}

Test(BSQ, 100_100)
{
    Square fs;
    char *str_test = file_reader_test("mouli_maps_solved/intermediate_map_100_100");
    char *str_mine = file_reader("mouli_maps/intermediate_map_100_100", &fs);
    cr_assert_str_eq(str_mine, str_test);
    free(str_test);
    free(str_mine);
}

Test(BSQ, 1000_1000)
{
    Square fs;
    char *str_test = file_reader_test("mouli_maps_solved/intermediate_map_1000_1000");
    char *str_mine = file_reader("mouli_maps/intermediate_map_1000_1000", &fs);
    cr_assert_str_eq(str_mine, str_test);
    free(str_test);
    free(str_mine);
}

Test(BSQ, 1000_1000_2)
{
    Square fs;
    char *str_test = file_reader_test("mouli_maps_solved/intermediate_map_1000_1000_2");
    char *str_mine = file_reader("mouli_maps/intermediate_map_1000_1000_2", &fs);
    cr_assert_str_eq(str_mine, str_test);
    free(str_test);
    free(str_mine);
}

Test(BSQ, 10000_10000)
{
    Square fs;
    char *str_test = file_reader_test("mouli_maps_solved/intermediate_map_10000_10000");
    char *str_mine = file_reader("mouli_maps/intermediate_map_10000_10000", &fs);
    cr_assert_str_eq(str_mine, str_test);
    free(str_test);
    free(str_mine);
}

Test(BSQ, 187_187_empty)
{
    Square fs;
    char *str_test = file_reader_test("mouli_maps_solved/intermediate_map_187_187_empty");
    char *str_mine = file_reader("mouli_maps/intermediate_map_187_187_empty", &fs);
    cr_assert_str_eq(str_mine, str_test);
    free(str_test);
    free(str_mine);
}

Test(BSQ, 187_187_filled)
{
    Square fs;
    char *str_test = file_reader_test("mouli_maps_solved/intermediate_map_187_187_filled");
    char *str_mine = file_reader("mouli_maps/intermediate_map_187_187_filled", &fs);
    cr_assert_str_eq(str_mine, str_test);
    free(str_test);
    free(str_mine);
}

Test(BSQ, 187_187_with_obstacles_25pc)
{
    Square fs;
    char *str_test = file_reader_test("mouli_maps_solved/intermediate_map_187_187_with_obstacles_25pc");
    char *str_mine = file_reader("mouli_maps/intermediate_map_187_187_with_obstacles_25pc", &fs);
    cr_assert_str_eq(str_mine, str_test);
    free(str_test);
    free(str_mine);
}

Test(BSQ, 187_187_with_obstacles_50pc)
{
    Square fs;
    char *str_test = file_reader_test("mouli_maps_solved/intermediate_map_187_187_with_obstacles_50pc");
    char *str_mine = file_reader("mouli_maps/intermediate_map_187_187_with_obstacles_50pc", &fs);
    cr_assert_str_eq(str_mine, str_test);
    free(str_test);
    free(str_mine);
}

Test(BSQ, 187_187_with_obstacles_75pc)
{
    Square fs;
    char *str_test = file_reader_test("mouli_maps_solved/intermediate_map_187_187_with_obstacles_75pc");
    char *str_mine = file_reader("mouli_maps/intermediate_map_187_187_with_obstacles_75pc", &fs);
    cr_assert_str_eq(str_mine, str_test);
    free(str_test);
    free(str_mine);
}

Test(BSQ, empty_corners)
{
    Square fs;
    char *str_test = file_reader_test("mouli_maps_solved/intermediate_map_empty_corners");
    char *str_mine = file_reader("mouli_maps/intermediate_map_empty_corners", &fs);
    cr_assert_str_eq(str_mine, str_test);
    free(str_test);
    free(str_mine);
}

Test(BSQ, filled_corners)
{
    Square fs;
    char *str_test = file_reader_test("mouli_maps_solved/intermediate_map_filled_corners");
    char *str_mine = file_reader("mouli_maps/intermediate_map_filled_corners", &fs);
    cr_assert_str_eq(str_mine, str_test);
    free(str_test);
    free(str_mine);
}

Test(BSQ, one_column_with_obstacles_25pc)
{
    Square fs;
    char *str_test = file_reader_test("mouli_maps_solved/intermediate_map_one_column_with_obstacles_25pc");
    char *str_mine = file_reader("mouli_maps/intermediate_map_one_column_with_obstacles_25pc", &fs);
    cr_assert_str_eq(str_mine, str_test);
    free(str_test);
    free(str_mine);
}

Test(BSQ, one_column_with_obstacles_50pc)
{
    Square fs;
    char *str_test = file_reader_test("mouli_maps_solved/intermediate_map_one_column_with_obstacles_50pc");
    char *str_mine = file_reader("mouli_maps/intermediate_map_one_column_with_obstacles_50pc", &fs);
    cr_assert_str_eq(str_mine, str_test);
    free(str_test);
    free(str_mine);
}

Test(BSQ, one_column_with_obstacles_75pc)
{
    Square fs;
    char *str_test = file_reader_test("mouli_maps_solved/intermediate_map_one_column_with_obstacles_75pc");
    char *str_mine = file_reader("mouli_maps/intermediate_map_one_column_with_obstacles_75pc", &fs);
    cr_assert_str_eq(str_mine, str_test);
    free(str_test);
    free(str_mine);
}

Test(BSQ, one_empty_box)
{
    Square fs;
    char *str_test = file_reader_test("mouli_maps_solved/intermediate_map_one_empty_box");
    char *str_mine = file_reader("mouli_maps/intermediate_map_one_empty_box", &fs);
    cr_assert_str_eq(str_mine, str_test);
    free(str_test);
    free(str_mine);
}

Test(BSQ, one_empty_column)
{
    Square fs;
    char *str_test = file_reader_test("mouli_maps_solved/intermediate_map_one_empty_column");
    char *str_mine = file_reader("mouli_maps/intermediate_map_one_empty_column", &fs);
    cr_assert_str_eq(str_mine, str_test);
    free(str_test);
    free(str_mine);
}

Test(BSQ, one_empty_line)
{
    Square fs;
    char *str_test = file_reader_test("mouli_maps_solved/intermediate_map_one_empty_line");
    char *str_mine = file_reader("mouli_maps/intermediate_map_one_empty_line", &fs);
    cr_assert_str_eq(str_mine, str_test);
    free(str_test);
    free(str_mine);
}

Test(BSQ, one_filled_box)
{
    Square fs;
    char *str_test = file_reader_test("mouli_maps_solved/intermediate_map_one_filled_box");
    char *str_mine = file_reader("mouli_maps/intermediate_map_one_filled_box", &fs);
    cr_assert_str_eq(str_mine, str_test);
    free(str_test);
    free(str_mine);
}

Test(BSQ, one_filled_line)
{
    Square fs;
    char *str_test = file_reader_test("mouli_maps_solved/intermediate_map_one_filled_line");
    char *str_mine = file_reader("mouli_maps/intermediate_map_one_filled_line", &fs);
    cr_assert_str_eq(str_mine, str_test);
    free(str_test);
    free(str_mine);
}

Test(BSQ, one_line_with_obstacles_25pc)
{
    Square fs;
    char *str_test = file_reader_test("mouli_maps_solved/intermediate_map_one_line_with_obstacles_25pc");
    char *str_mine = file_reader("mouli_maps/intermediate_map_one_line_with_obstacles_25pc", &fs);
    cr_assert_str_eq(str_mine, str_test);
    free(str_test);
    free(str_mine);
}

Test(BSQ, one_line_with_obstacles_50pc)
{
    Square fs;
    char *str_test = file_reader_test("mouli_maps_solved/intermediate_map_one_line_with_obstacles_50pc");
    char *str_mine = file_reader("mouli_maps/intermediate_map_one_line_with_obstacles_50pc", &fs);
    cr_assert_str_eq(str_mine, str_test);
    free(str_test);
    free(str_mine);
}

Test(BSQ, one_line_with_obstacles_75pc)
{
    Square fs;
    char *str_test = file_reader_test("mouli_maps_solved/intermediate_map_one_line_with_obstacles_75pc");
    char *str_mine = file_reader("mouli_maps/intermediate_map_one_line_with_obstacles_75pc", &fs);
    cr_assert_str_eq(str_mine, str_test);
    free(str_test);
    free(str_mine);
}

Test(BSQ, 2000_2000)
{
    Square fs;
    char *str_test = file_reader_test("mouli_maps_solved/intermediate_map_2000_2000");
    char *str_mine = file_reader("mouli_maps/intermediate_map_2000_2000", &fs);
    cr_assert_str_eq(str_mine, str_test);
    free(str_test);
    free(str_mine);
}

Test(BSQ, 200_200)
{
    Square fs;
    char *str_test = file_reader_test("mouli_maps_solved/intermediate_map_200_200");
    char *str_mine = file_reader("mouli_maps/intermediate_map_200_200", &fs);
    cr_assert_str_eq(str_mine, str_test);
    free(str_test);
    free(str_mine);
}

Test(BSQ, 34_137_empty)
{
    Square fs;
    char *str_test = file_reader_test("mouli_maps_solved/intermediate_map_34_137_empty");
    char *str_mine = file_reader("mouli_maps/intermediate_map_34_137_empty", &fs);
    cr_assert_str_eq(str_mine, str_test);
    free(str_test);
    free(str_mine);
}

Test(BSQ, 34_137_filled)
{
    Square fs;
    char *str_test = file_reader_test("mouli_maps_solved/intermediate_map_34_137_filled");
    char *str_mine = file_reader("mouli_maps/intermediate_map_34_137_filled", &fs);
    cr_assert_str_eq(str_mine, str_test);
    free(str_test);
    free(str_mine);
}

Test(BSQ, 34_137_with_obstacles_25pc)
{
    Square fs;
    char *str_test = file_reader_test("mouli_maps_solved/intermediate_map_34_137_with_obstacles_25pc");
    char *str_mine = file_reader("mouli_maps/intermediate_map_34_137_with_obstacles_25pc", &fs);
    cr_assert_str_eq(str_mine, str_test);
    free(str_test);
    free(str_mine);
}

Test(BSQ, 34_137_with_obstacles_50pc)
{
    Square fs;
    char *str_test = file_reader_test("mouli_maps_solved/intermediate_map_34_137_with_obstacles_50pc");
    char *str_mine = file_reader("mouli_maps/intermediate_map_34_137_with_obstacles_50pc", &fs);
    cr_assert_str_eq(str_mine, str_test);
    free(str_test);
    free(str_mine);
}

Test(BSQ, 34_137_with_obstacles_75pc)
{
    Square fs;
    char *str_test = file_reader_test("mouli_maps_solved/intermediate_map_34_137_with_obstacles_75pc");
    char *str_mine = file_reader("mouli_maps/intermediate_map_34_137_with_obstacles_75pc", &fs);
    cr_assert_str_eq(str_mine, str_test);
    free(str_test);
    free(str_mine);
}

Test(BSQ, 5000_5000)
{
    Square fs;
    char *str_test = file_reader_test("mouli_maps_solved/intermediate_map_5000_5000");
    char *str_mine = file_reader("mouli_maps/intermediate_map_5000_5000", &fs);
    cr_assert_str_eq(str_mine, str_test);
    free(str_test);
    free(str_mine);
}

Test(BSQ, 500_500)
{
    Square fs;
    char *str_test = file_reader_test("mouli_maps_solved/intermediate_map_500_500");
    char *str_mine = file_reader("mouli_maps/intermediate_map_500_500", &fs);
    cr_assert_str_eq(str_mine, str_test);
    free(str_test);
    free(str_mine);
}

Test(BSQ, 500_500_2)
{
    Square fs;
    char *str_test = file_reader_test("mouli_maps_solved/intermediate_map_500_500_2");
    char *str_mine = file_reader("mouli_maps/intermediate_map_500_500_2", &fs);
    cr_assert_str_eq(str_mine, str_test);
    free(str_test);
    free(str_mine);
}

Test(BSQ, 500_500_3)
{
    Square fs;
    char *str_test = file_reader_test("mouli_maps_solved/intermediate_map_500_500_3");
    char *str_mine = file_reader("mouli_maps/intermediate_map_500_500_3", &fs);
    cr_assert_str_eq(str_mine, str_test);
    free(str_test);
    free(str_mine);
}

Test(BSQ, 97_21_empty)
{
    Square fs;
    char *str_test = file_reader_test("mouli_maps_solved/intermediate_map_97_21_empty");
    char *str_mine = file_reader("mouli_maps/intermediate_map_97_21_empty", &fs);
    cr_assert_str_eq(str_mine, str_test);
    free(str_test);
    free(str_mine);
}

Test(BSQ, 97_21_filled)
{
    Square fs;
    char *str_test = file_reader_test("mouli_maps_solved/intermediate_map_97_21_filled");
    char *str_mine = file_reader("mouli_maps/intermediate_map_97_21_filled", &fs);
    cr_assert_str_eq(str_mine, str_test);
    free(str_test);
    free(str_mine);
}

Test(BSQ, 97_21_with_obstacles_25pc)
{
    Square fs;
    char *str_test = file_reader_test("mouli_maps_solved/intermediate_map_97_21_with_obstacles_25pc");
    char *str_mine = file_reader("mouli_maps/intermediate_map_97_21_with_obstacles_25pc", &fs);
    cr_assert_str_eq(str_mine, str_test);
    free(str_test);
    free(str_mine);
}

Test(BSQ, 97_21_with_obstacles_50pc)
{
    Square fs;
    char *str_test = file_reader_test("mouli_maps_solved/intermediate_map_97_21_with_obstacles_50pc");
    char *str_mine = file_reader("mouli_maps/intermediate_map_97_21_with_obstacles_50pc", &fs);
    cr_assert_str_eq(str_mine, str_test);
    free(str_test);
    free(str_mine);
}

Test(BSQ, 97_21_with_obstacles_75pc)
{
    Square fs;
    char *str_test = file_reader_test("mouli_maps_solved/intermediate_map_97_21_with_obstacles_75pc");
    char *str_mine = file_reader("mouli_maps/intermediate_map_97_21_with_obstacles_75pc", &fs);
    cr_assert_str_eq(str_mine, str_test);
    free(str_test);
    free(str_mine);
}
