#include <stdio.h>

int binsearch(int x, int v[], int n);

int main() {
}

/*
 *	Find x in v[0] <= v[1] <= ... v[n-1]
 * */
int binsearch(int x, int v[], int n) {
	int low, high;
	low = 0;
	high = n - 1;
	
	while (low <= high) {
		int mid = low + (high - low)/2;
		if (v[mid] < x)
			low = mid + 1;
		else if (v[mid] > x)
			high = mid - 1;
		else
			return mid
	}

	return -1;
}
