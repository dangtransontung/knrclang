#include <ctype.h>

float getfloat(float *pf) {
  int c, sign;

  // skip spaces
  while (isspace(c = getch()))
    ;

  // unrecognized char -> return 0
  if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
    ungetch(c);
    return 0.0;
  }

  sign = (c == '-') ? -1 : 1;


}
