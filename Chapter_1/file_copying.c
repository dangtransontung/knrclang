#include <stdio.h>

int main() {
    int c; // EOF is out of range for type 'char'; therefore, we're using int here;
    while ((c = getchar()) != EOF) { // `!=` has higher precedence than `=`
        putchar(c);
    }
    printf("%d\n", EOF);

}