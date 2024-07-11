//
// Created by Tung Dang Tran on 7/10/24.
//

// array version
void my_strcpy(char *s, char *t)
{
    int i;
    i = 0;

    while ((s[i] = t[i]) != '\0')
        i++;
}

// pointer version
void my_strcpy_p(char *s, char *t)
{
    while ((*s = *t) != '\0') {
        t++;
        s++;
    }
}

// super version
void my_strcpy_super(char *s, char *t) {
    while ((*s++ = *t++))
        ;
}