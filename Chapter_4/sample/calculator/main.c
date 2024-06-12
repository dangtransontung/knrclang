#include <stdio.h>
#include <stdlib.h>
#include "calc.h"
#define MAXOP 100

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
