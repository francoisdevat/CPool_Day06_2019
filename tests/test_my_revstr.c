/*
** EPITECH PROJECT, 2019
** test 
** File description:
** ça test
*/

#include <criterion/criterion.h>

char *my_revstr(char *str);

Test (my_revstr, change_the_charactere_of_a_string)
{
    char str[6] = "coucu";

    my_revstr(str);
    cr_assert_str_eq (str, "ucuoc");
}
