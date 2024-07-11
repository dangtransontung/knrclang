int strlen(char *s) { // s is a private copy of passed in address
  int n;

  for (n = 0; *s != '\0'; s++)
    n++;

  return n;
}
