/*
** EPITECH PROJECT, 2019
** fonction qui change juste ce qu'il faut
** File description:
** tout est dans le titre
*/


char *my_strncpy(char *dest, char const *src, int n)
{
    int i;

    i = 0;
    while (i != n) {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}
