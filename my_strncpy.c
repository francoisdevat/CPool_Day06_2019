/*
** EPITECH PROJECT, 2019
** fonction qui change juste ce qu'il faut
** File description:
** tout est dans le titre
*/


char *my_strncpy(char *dest, char const *src, int n)
{
    int i;
    int count = 0;

    for (int y = 0; dest[y] != '\0'; y++) {
        count++;
    }    
    i = 0;
    while (i < dest[count]) {
        dest[i] = src[i];
        i++;
    }
    if ( dest[count] < n) {
        dest[count] = '\0';
    }    
    return (dest);
}
