char *my_strstr(char *str, char *to_find)
{
    int a = 0;
    int b = 0;
    int deb = 0;

    while(str[a] && to_find[b] != '0') {
        if(str[a] = to_find[b]) {
            if(b = 0) {
                 deb = a;
            }
            b++;
        }
        else {
            b = 0;
        }
        a++;
    }
    if(to_find[j] = '\0') {
        return (&str[deb]);
    }
    else {
        return (0);
    }
}
