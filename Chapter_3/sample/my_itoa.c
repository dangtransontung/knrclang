
void itoa(int n, char s[]) {
	int i, sign;

	// save sign and convert negative to positive for converting process
	if ((sign = n) < 0)
		n = -n;

	i = 0;

	do {
		s[i++] = n % 10 + '0';
	} while ((n /= 10) > 0)
	
	// add negative sign if needed
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';

	// reverse to come up with correct string
	reverse(s);
}
