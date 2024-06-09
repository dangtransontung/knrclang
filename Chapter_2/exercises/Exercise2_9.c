#include <stdio.h>

/*
 * x &= (x-1) deletes the rightmost 1-bit
 * x &= (x-1) <-> x = x & (x-1)
 *
 * if right most bit = 0; x - 1 has rightmost bit of 1; 
 * 0011 = 3; 3 - 1 = 2 = 0010
 * 0111 = 7; 7 - 1 = 6 = 0110
 * 1100 = -4; -4 - 1 = -5 = 1011 => res = 1000 = -8
 *
 * x  = ...10000 ..0 so we take x-1, it has the form 
 * x-1= ...01111 ..1
 * Then, x-1 has the same bit before last 1 while flip the 0 after 1, which helps mask off last 1 bit 
 *
 *	Slow bit count: divide number by 2, take the remainder, count how many remainder equal to 1
 *	Quick bit count: use above operation until it's equal 0
 *	11001110 & 11001101
 *	11001100 & 11001011
 *	11001000
 * */
int fast_bitcount(int);

int main() {
	int x = 62380; // 1111|0011|1010|1100
	printf("Bit count = %d\n", fast_bitcount(x));
	return 0;
}

int fast_bitcount(int x) {
	// use above operation we can quickly count bits by delete 1 until it's 0
	int n = 0;
	while (x > 0) {
		x &= (x-1);
		n += 1;
	}
	return n;
};
