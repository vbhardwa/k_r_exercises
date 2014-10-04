#include "stdio.h"

int main () {
	int c, first_blank = 1;
	while ( (c = getchar()) != EOF ) {
		if (c == ' ' || c == '\t' || c == '\n' ) {
			if (first_blank) {
				putchar('\n');
				first_blank = 0;
			}
		} else {
			putchar(c);
			first_blank = 1;
		}
	} 
	return 0;
}
