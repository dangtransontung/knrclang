#include <stdio.h>

int binsearch_1(int x, int v[], int n);

int main() {
	int xs[] = {1,2,3,4,5,6,7,8,9,10};
	printf("%d\n", binsearch_1(5, xs, 10));
	return 0;
}

/*
 *	Binary search with 1 test inside the loop
 * */
int binsearch_1(int x, int v[], int n) {
	int low = 0;
	int high = n - 1;
	int mid;
	
	while (low < high) {
		mid = low + (high - low) / 2;
		if (v[mid] < x)
			low = mid + 1;
		else
			high = mid;
	}

	if (v[low] == x)
		return low;
	else if (v[high] == x)
		return high;
	else
		return -1;
}
/*
 *	This should have a longer runtime due to the while loop run until mid == high
 *	while the binsearch with two tests return immediately after the result is found
 * */
