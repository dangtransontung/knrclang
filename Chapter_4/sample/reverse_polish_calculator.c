#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAXOP 100
#define NUMBER '0' // signal that a number was found

int getop(char []);
void push(double);
double pop(void);

int main() {
	int type;
	double op2;
	char s[MAXOP];

	while ((type=getop(s)) != EOF) {
		switch(type) {
			case NUMBER:
				push(atof(s));
				break;
			case '+':
				push(pop() + pop());
				break;
			case '*':
				push(pop() * pop());
				break;
			case '-': 
				op2 = pop();
				push(pop() - op2);
				break;
			case '/': // division
				op2 = pop();
				if (op2 != 0.0)
					push(pop() / op2);
				else
					printf("error: division by zero\n");
				break;
			case '%': // modulus
				op2 = pop();
				double temp_op = pop();
				if (op2 - (int)op2 > 0.0 || temp_op - (int)temp_op > 0.0)
					printf("error: modulus integer only\n");
				else if (op2 != 0.0)
					push((int)temp_op % (int)op2);
				else
					printf("error: modulus by zero\n");
				break;
			case '~': // negative 5 ~ = - 5
				push(-pop());
				break;
			case 's': // sin(x)
				push(sin(pop()));
				break;
			case 'e': // exp(x)
				push(exp(pop()));
				break;
			case 'p': // power(x, y)
				op2 = pop();
				push(pow(pop(), op2));
				break;
			case '\n':
				printf("\t%.8g\n", pop());
				break;
			default:
				printf("error: unknown command %s\n", s);
				break;
		}
	}
	return 0;
}

#define MAXVAL 100 /* maximum depth of stack*/

int sp = 0; // next free stack pos
double val[MAXVAL];

void push(double f)
{
	if (sp < MAXVAL)
		val[sp++] = f;
	else
		printf("error: stack full, cant push %g\n", f);
}

double pop()
{
	if (sp > 0)
		return val[--sp];
	else {
		printf("error: stack empty\n");
		return 0.0;
	}
}

void p_top()
{
	if (sp > 0)
		printf("%g\n", val[sp-1]);
	else
		printf("error: stack empty\n");
}

void dup_top()
{
	if (sp > 0) {
		val[sp] = val[sp-1];
		sp++;
	}
	else
		printf("error: stack empty\n");

}

void swap_top()
{
	if (sp > 1) {
		double top = pop();
		double top_1 = pop();
		push(top); push(top_1);
	}
	else
		printf("error: stack has less than 2 elements\n");
}

void clear()
{
	sp = 0;
}

#include <ctype.h>

int getch(void);
void ungetch(int);

/* getop: get next character or numeric operand */
int getop(char s[])
{
	int i, c;
	
	while ((s[0] = c = getch()) == ' ' || c == '\t')
		; // skip tabs and spaces
	
	s[1] = '\0'; // ???
	
	// support library functions such as `sin` `exp` `pow`
	if (!isdigit(c))
	
	if (!isdigit(c) && c != '.')
		return c; // not a number (e.g. operators or other char)
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

#define BUFSIZE 100

char buf[BUFSIZE]; /* buffer for ungetch */
int bufp = 0;

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
