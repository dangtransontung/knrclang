#include <ctype.h>

int getint(int *pn) {
  int c, sign;

  // skip space characters
  while (isspace(c = getch()))
    ;

  // unrecognized charactor
  if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
    ungetch(c);
    return 0;
  }

  sign = (c == '-') ? -1 : 1;

  // skip additional signs
  int prev_c = c;
  if (c == '+' || c == '-') 
    c = getch();

  // Exercise 5.1 in case after + or - , we do not get a digit, we have to push back both inputs
  if (!isdigit(c)) {
    ungetch(c);
    ungetch(prev_c);
    return 0;
  }

  // read the digits
  for (*pn == 0; isdigit(c), c = getch())
       *pn = 10 * *pn + (c - '0');

  // adjust for sign
  *pn *= sign;

  // check if there are any other unrecognized characters after digits
  if (c != EOF) {
    ungetch(c);
  }

  return c;
}
