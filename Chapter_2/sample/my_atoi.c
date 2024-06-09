#include <stdio.h>

int my_atoi(char []);

int main() {
	int x = my_atoi("456");

	printf("%d\n", x - 1);
	return 0;
}

int my_atoi(char s[]) {
	int result = 0;

	for (int i = 0; s[i] >= '0' && s[i] <= '9'; i++) {
		result = s[i] - '0' + result * 10;
	}
	return result;
}
