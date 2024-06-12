#include <stdio.h>
#define MAX_LENGTH 100;

void recursive_reverse(char s[], int pos, int size) {
	if (pos == size)
		return;

	recursive_reverse(s, pos + 1, size);
	int head = s[pos];
	for (int i = pos; i < size - 1; i++)
		s[i] = s[i+1];

	s[size-1] = head;
}

int main() {
	char s[] = "123456789";
	recursive_reverse(s, 0, 9);
	printf("%s\n", s);
}

//TODO is there any better way than this solution?
