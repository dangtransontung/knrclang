#include <stdio.h>

/**
 * Return 1 if string 't' occurs at the end of the string 's', 0 otherwise
 */
int strend_ptr(char *s,char *t)
{
    int len_s, len_t;
    len_s = 0;
    len_t = 0;

    for (char *c = s; *c != '\0'; c++, len_s++)
        ;

    for (char *c = t; *c != '\0'; c++, len_t++)
        ;

    // t is longer than s
    if (len_t > len_s)
        return 0;

    for (int ptr_s = len_s - len_t, ptr_t = 0; ptr_t < len_t; ptr_s++, ptr_t++)
        if (*(s + ptr_s) != *(t + ptr_t))
            return 0;

    return 1;
}

int main() {
    char *s = "tungdang";
    char *t = "dang";

    int result = strend_ptr(s, t);
    printf("%d\n", result);

    char *s1 = "ang";
    char *t1 = "dang";

    int result1 = strend_ptr(s1, t1);
    printf("%d\n", result1);

    return 0;
}