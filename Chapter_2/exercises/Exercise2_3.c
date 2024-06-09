#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int my_htoi(char []);

int main() {
	int n =  my_htoi("ff");
	printf("%d\n", n);
	return 0;
}

int my_htoi(char s[]) {
	int i, n;
	n = 0;
	for(i = 0; s[i] != '\0';i++) {
		if (isdigit(s[i])) {
			n = n * 16 + atoi(&s[i]);
		} else if (s[i] >= 'a' && s[i] <= 'f') {
			n = n * 16 + (s[i] - 'a' + 10);
		} else if (s[i] >= 'A' && s[i] <= 'F') {
			n = n * 16 + (s[i] - 'A' + 10);
		} else if (s[i] == 'x' || s[i] == 'X') {
			continue;
		} else break;
	}

	return n;
}
