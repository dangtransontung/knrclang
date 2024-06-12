#define BUFSIZE 100

static char buf[BUFSIZE]; /* buffer for ungetch */
static int bufp = 0;

int getch(void)
{
	return (bufp > 0) ? buf[--bufp] : getchar(); // if buffer non-empty, take it from buffer, else use getchar;
}

void ungetch(int c) /*push back character to input */
{
	if (bufp >= BUFSIZE)
		printf("ungetch: too many chars\n");
	else
		buf[bufp++] = c; // put back the excess char into buffer
}
