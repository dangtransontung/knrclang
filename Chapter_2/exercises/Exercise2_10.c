#include <stdio.h>

char* my_lower(char s[]);

int main() {
	char s[] = "aBc123D";
	printf("%s\n", my_lower(s));
}

char* my_lower(char s[]) {
	for (int i = 0; s[i] != '\0'; i++) {
		s[i] = (s[i] >= 'A' && s[i] <= 'Z') ? s[i] - 'A' + 'a' : s[i];
	}

	return s;
}
