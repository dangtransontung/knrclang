#include <stdio.h>
#define MAX_LENGTH 100;

void recursive_itoa(int n, char s[]);

int main() {

}

void recursive_itoa(int n, char s[]) {
	if (n < 0) {
		s[0] = '-';
		n = -n
	}

	if (n / 10 == 0) {
		return s;
	}
}
