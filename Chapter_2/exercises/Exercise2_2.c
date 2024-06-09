#include <stdio.h>

int main() {
	int c, i, lim;
	lim = 10;
	for (i = 0; (i < lim - 1)  + ((c=getchar()) != '\n') + (c != EOF) == 3; ++i){
		printf("%c\n", c);
	}
	return 0;
}	

