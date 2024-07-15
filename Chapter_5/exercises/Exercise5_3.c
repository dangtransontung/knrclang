#include <stdio.h>
/**
 * copying string t to the end of s
 */
void strcat_ptr(char *s, char *t) {
    char *temp = s;

    while (*temp++ != '\0') // *temp++ refer to the char before t was incremented
        ;
    while (*temp++ = *t++)
        ;
}

int main() {
   char s[10];
   s[0] = 'a';
   s[1] = 'b';
   s[2] = 'c';
   s[3] = '\0';

   char *t = "def";
   strcat_ptr(&s[0], t);
   printf("%s", s);
}