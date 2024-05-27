#include <stdio.h>

int main() {
	int c, bc;
	bc = 0;

	while ((c = getchar()) != EOF) {
		if (bc == 0) {
			printf("%c", c);
			if (c == ' ')
				++bc;
		} else {
			if (c != ' ') {
				printf("%c", c);
				bc = 0;
			}
		}
	}
}
