#include "stdio.h"

int main () {
	int c, blank_found = 0; 
	while ( (c = getchar()) != EOF ) {
		if (c == ' ' ) { 
			if (blank_found == 0) {
				blank_found = 1;
			} else {
				continue;
			}
				
		} else {
			blank_found = 0;
		}
		putchar(c);
	} 
	
	
	return 0;
}
