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
    for (i =0; i < n; i++){
        if (i <= count) {
            dest[i] = src[i];
        }    
    }
    if ( count < n) {
        dest[count] = '\0';
    }    
    return (dest);
}
