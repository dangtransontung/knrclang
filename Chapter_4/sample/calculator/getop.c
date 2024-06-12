#include <ctype.h>

int getch(void);
void ungetch(int);

// TODO modify getop so that it doesn't need ungetch. Use `internal static` variable

/* getop: get next character or numeric operand */
int getop(char s[])
{
	int i, c;

	// Spaces and tabs
	while ((s[0] = c = getch()) == ' ' || c == '\t')
		;
	
	s[1] = '\0'; // ???
	
	// Operators
	if (!isdigit(c) && c != '.')
		return c; // not a number (e.g. operators or other char)

	// Numeric operands
	i = 0;
	if (isdigit(c))
		while (isdigit(s[++i] = c = getch()))
			;
	if (c == '.')
		while (isdigit(s[++i] = c = getch()))
			;
	s[i] = '\0';

	if (c != EOF)
		ungetch(c);
	return NUMBER;
}
