#include <stdio.h>

void escape(char s[], char t[]);

int main() {
	char s[] = "abc\n123\t456\ndef";
	char t[100];
	escape(s, t);
	printf("%s\n", t);
	return 0;
}

/**
 * converts character like newline, tab into visible \n and \t as it copies from t to s
 */
void escape(char s[], char t[]) {
	int i, j;
	i = 0;
	j = 0;
	while (s[i] != '\0') {
		switch(s[i]) {
			case '\n':
				t[j] = '\\';
				t[++j] = 'n';
				break;
			case '\t':
				t[j] = '\\';
				t[++j] = 't';
				break;
			default:
				t[j] = s[i];
				break;
		}
		i++; j++;
	}

	t[j] = '\0';
}
