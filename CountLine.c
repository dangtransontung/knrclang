#include <stdio.h>

int main() {
  int nl = 0;
  char c;
  while ((c = getchar()) != EOF) {
    if (c == '\n') nl++;
  }

  printf("No of lines: %d\n", nl);
}
