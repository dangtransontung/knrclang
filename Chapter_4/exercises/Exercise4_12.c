#include <stdio.h>
#define MAX_LENGTH 100

void recursive_itoa(int n, char s[]);
int recursive_itoa_helper(int n, char s[]);

int main() 
{
	char s[MAX_LENGTH];
	recursive_itoa(-123, s);

	printf("%s\n", s);
}

void recursive_itoa(int n, char s[]) 
{
	int pos = recursive_itoa_helper(n, s);
	s[pos] = '\0';
}

int recursive_itoa_helper(int n, char s[])
{
	if (n / 10 == 0) {
		if (n < 0) {
			s[0] = '-';
			s[1] = '0' + (-n);
			return 2;
		} else 
			s[0] = '0' + n;
			return 1;
	}

	int pos = recursive_itoa_helper(n/10, s);
	s[pos++] = '0' + ((n < 0) ? (-n)%10 : n%10);

	return pos;
}

