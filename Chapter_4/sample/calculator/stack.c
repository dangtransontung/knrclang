#define MAXVAL 100 /* maximum depth of stack*/

static int sp = 0; // next free stack pos
static double val[MAXVAL];

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


