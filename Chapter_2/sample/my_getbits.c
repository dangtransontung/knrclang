#include <stdio.h>

/* get n bits from position p, right adjusted*/
unsigned getbits(unsigned x, int p, int n);

int main() {
	int i = 62380;
	printf("%d\n", getbits(i, 4, 3)); // 011 = 3
	return 0;
}


unsigned getbits(unsigned x, int p, int n) {
	return (x >> (p + 1 - n)) & ~(~0 << n);
}

/*
 *	x = 1111|0011|1010|1100
 *                 654 3210
 *	getbits(x, 4, 3) - get 3 bits from position 4 => get bit 4th 3th 2th
 * */
