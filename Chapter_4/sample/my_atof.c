#include <ctype.h>
#include <stdio.h>

#define MAXLINE 100

/* Convert string s to double */
double atof(char s[]) {
	double val, power;
	int i, sign;

	for (i=0; isspace(s[i]); i++) // skip white space
		;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	for (val = 0.0; isdigit(s[i]); i++)
		val = 10.0 * val + (s[i] - '0');

	if (s[i] == '.')
		i++;
	for (power = 1.0; isdigit(s[i]); i++) {
		val = 10.0 * val + (s[i] - '0');
		power *= 10;
	}

	return sign * val / power;
}

int main() {
	double sum, atof(char []); // declare function explicit in calling routine of `main`
	char line[MAXLINE];
	int getline (char line[], int max);

	sum = 0;
	while (getline(line, MAXLINE) > 0)
		printf("\t %g \n", sum += atof(line));
	return 0;
}

/*
 * If atof is defined in similar file like this. If has inconsistent types, compiler would 
 * detect the error.
 * However if `atof` is defined in another file, the returned result is treated as `int`
 * If there is no protoype, the function is implicitly declared by its first appearance.
 * In this example, it would be in line `sum+= atof(line)`
 * */

int atoi(char s[]) {
	double atof(char s[]);

	return (int) atof(s);
}
